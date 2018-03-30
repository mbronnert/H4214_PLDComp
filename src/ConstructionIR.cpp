#include "ConstructionIR.h"
#include <fstream>

ConstructionIR::ConstructionIR(list <CFG*> * l, BasicBlock * b) {
    listeCFG = l;
    currentCFG->currentBB = b;
}

ConstructionIR::ConstructionIR() {

}

ConstructionIR::~ConstructionIR() {
    for (list<CFG*>::iterator it = listeCFG->begin(); it != listeCFG->end(); it++)
    {
        delete *it;
    }
    listeCFG->clear();

}

void ConstructionIR::analyseProgramme(Programme * programme) {
    // TODO : faire les déclarations
    cout << "analyse programme start declaration" <<endl;
    for (auto it=programme->getDeclarations()->begin() ; it != programme->getDeclarations()->end() ; it++) {
        analyseDeclaration((Declaration *)(*it));
    }
    cout << "analyse programme start fonction" <<endl;

    for (auto it=programme->getFonctions()->begin() ; it != programme->getFonctions()->end() ; it++) {
        CFG* cfg = new CFG(*it);
        
        this->listeCFG=new list<CFG*>[3600];
        listeCFG->push_back(cfg);
        currentCFG = cfg;
        analyseFonction((Fonction *)*it);
    }
    cout << "analyse programme end" <<endl;
    startASM();
}

void ConstructionIR::startASM() {   
    cout << "startASM" <<endl;
    ofstream outfile ("main.s", ofstream::binary);
    outfile<<".text"<<endl;
    outfile<<".global main"<<endl;
    for(list<CFG*>::iterator it= listeCFG->begin() ; it != listeCFG->end() ; it++)
    {
        (*it)->gen_asm(outfile);
    }
    outfile.close();
    cout<<"Fichier assembleur généré"<<endl;
}

void ConstructionIR::analyseFonction(Fonction * fonction) {
    //TODO : paramètres

    // Ajout des déclaration à la table des symboles
    for (auto it=fonction->getDeclarations()->begin() ; it != fonction->getDeclarations()->end() ; it++) {
        analyseDeclaration((Declaration *)(*it));
    }

    // Analyse du bloc
    BasicBlock * prologue = new BasicBlock (currentCFG, fonction->getNom());
    currentCFG->add_bb(prologue);
    currentCFG->currentBB = prologue;
    analyseBloc(fonction->getBloc());

}

void ConstructionIR::analyseBloc(Bloc * bloc) {
    list <Instruction*> * instructions = bloc->getInstructions();

    for (auto it=instructions->begin() ; it!=instructions->end() ; it++) {
        TypeNoeud typeInstr = (*it)->typeNoeud();
        switch (typeInstr) {
            case TypeNoeud::APPELFONC :
                analyseAppelDeFonction((AppelDeFonction *)(*it));
                break;
            case TypeNoeud::AFFECTATION :
                analyseAffectation((Affectation *)(*it));
                break;
            case TypeNoeud::RETURN :
                analyseReturn((Return *)(*it));
                break;
            case TypeNoeud::IF :
                // TODO
                break;
            case TypeNoeud::IFELSE :
                // TODO
                break;
            case TypeNoeud::WHILE :
                // TODO
                break;
            case TypeNoeud::EXPRBIN :
                break;
            case TypeNoeud::EXPRUNAIRE :
                break;
            case TypeNoeud::EXPR :
                break;
            case TypeNoeud::DECLARATION :
                break;
            case TypeNoeud::VARIABLE :
                break;
            case TypeNoeud::NOMBRE :
                break;
            case TypeNoeud::CARACTERE :
                break;
            case TypeNoeud::APPELVAR :
                break;
            case TypeNoeud::BLOC :
                break;
            case TypeNoeud::BREAK :
                break;
        }
    }
}

void ConstructionIR::analyseAffectation(Affectation * affectation) {  
    cout<<"appel affectation"<<endl;
    Expression* expression = affectation->getExpression();
    string resultatAffectation;
    vector<string> params;
    string nomVariable = affectation->getNomVariable();
    resultatAffectation = expressionToIR(expression);
    params.push_back(resultatAffectation);
    params.push_back(nomVariable);
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, params);

}

void ConstructionIR::analyseAppelDeFonction(AppelDeFonction * appelDeFonction) {
    cout<<"appel fonction"<<endl;
    list<Expression*> * parametres = appelDeFonction->getParametres();
    if(parametres) {
        TypeNoeud typeInstr;
        vector<string> listParametre;
        listParametre.push_back(appelDeFonction->getNom());

        for(list<Expression*>::iterator it= parametres->begin() ; it != parametres->end() ; it++) {
            string nom;
            nom = expressionToIR(*it);
            listParametre.push_back(nom);
        }

        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::call, Type::CHAR, listParametre);   
    }
}

void ConstructionIR::analyseReturn(Return * retour) {
    cout<<"appel return"<<endl;
    Expression* expression = retour->getReturnExpression();
    TypeNoeud typeInstr;
    string resultatReturn;
    vector<string> params;
    typeInstr = expression->typeNoeud();
    resultatReturn = expressionToIR(expression);
    params.push_back(resultatReturn);
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::ret, Type::INT64, params);
}

void ConstructionIR::analyseDeclaration(Declaration * declaration) {
    cout<<"appel declaration"<<endl;
    currentCFG->add_to_symbol_table(declaration->getVariable()->getNom(), declaration->getType());
}

string ConstructionIR::expressionToIR(Expression * expression) {
    string chaine;
    TypeNoeud typeNoeud = expression->typeNoeud();
    Nombre * nombre;
    Caractere * caractere;
    Variable * variable;
    switch (typeNoeud) {
        case TypeNoeud::EXPRBIN :
            analyseExprBin((ExprBin *) expression);
            break;
        case TypeNoeud::NOMBRE :
            nombre = (Nombre *) expression;
            chaine = to_string(nombre->getValeur());
            break;
        case TypeNoeud::CARACTERE :
            caractere = (Caractere *) expression;
            chaine = to_string(caractere->getValeur());
            break;
        case TypeNoeud::VARIABLE :
            variable = (Variable *) expression;
            chaine = variable->getNom(); // TODO : vérifier que c'est bien le nom de la variable qu'on veut
            break;
            //TODO : tous les autres types
    }
    return chaine;
}

void ConstructionIR::analyseExprBin(ExprBin * expression) {
    cout<<"appel exprbin"<<endl;
    string resultat;
    string resultatGauche;
    string resultatDroite;
    vector<string> params;

    resultatGauche = expressionToIR(expression->getGauche());
    resultatDroite = expressionToIR(expression->getDroite());
    expression->typage();
    string tempVar = currentCFG->create_new_tempvar(expression->getType());

    params.push_back(tempVar);
    params.push_back(resultatGauche);
    params.push_back(resultatDroite);

    switch (expression->getSymbole()) {
        case ADD:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::add, Type::INT64, params);
        break;
        case MULT:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::mul, Type::INT64, params);
        break;
        case MOINS:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::sub, Type::INT64, params);
        break;
        case DIV:
        break;
        case MOD:
        break;
        // case PAR:
        // break;
        case INFS:
        break;
        case INF:
        break;
        case SUPS:
        break;
        case SUP:
        break;
        // case NON: //unaire
        // break;
        case EQUALB:
        break;
        case DIFF:
        break;
        case ANDB:
        break;
        case ORB:
        break;
        case AND:
        break;
        case OR:
        break;
        case POW:
        break;
        case DECG:
        break;
        case DECD:
        break;
        // case EQUAL: // unaire
        // break;
        // case PPEXP:
        // break;
        // case MMEXP:
        // break;
        // case EXPPP:
        // break;
        // case EXPMM:
        // break;
        // case XOREQ:
        // break;
        // case OREQ:
        // break;
        // case ANDEQ:
        // break;
        // case MODEQ:
        // break;
        // case DIVEQ:
        // break;
        // case MULTEQ:
        // break;
        // case MOINSEQ:
        // break;
        // case ADDEQ:
        // break;
        // case INVERT:
        // break;
        // case NEGATION:
        // break;
        case COMMA:
        break;
        default:
        break;
    }
}
