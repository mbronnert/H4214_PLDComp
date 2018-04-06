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

void ConstructionIR::analyseProgramme(Programme * programme, string fileName) {
    cout << "analyseProgramme start" <<endl;
    for (auto it=programme->getDeclarations()->begin() ; it != programme->getDeclarations()->end() ; it++) {
        analyseDeclaration((Declaration *)(*it));
    }
    CFG* cfg;
    this->listeCFG=new list<CFG*>[3600];
    for (auto it=programme->getFonctions()->begin() ; it != programme->getFonctions()->end() ; it++) {
        cfg = new CFG(*it);
        listeCFG->push_back(cfg);
        currentCFG = cfg;
        analyseFonction((Fonction *)*it);
    }
    cout << "analyseProgramme end" <<endl;
    startASM(fileName);
}

void ConstructionIR::startASM(string fileName) {
    ofstream outfile (fileName + ".s", ofstream::binary);
    outfile<<".text"<<endl;
    outfile<<".global _main"<<endl;
    for(list<CFG*>::iterator it = listeCFG->begin() ; it != listeCFG->end() ; it++){
        (*it)->gen_asm(outfile);
    }
    outfile.close();
    cout<<"\033[21;32m[FICHIER ASSEMBLEUR GÉNÉRÉ]\033[0m\n"<<endl;
}

void ConstructionIR::analyseFonction(Fonction * fonction) {
    cout << "analyseFonction start" <<endl;
    // Paramètres
    for (auto it=fonction->getParametres()->begin() ; it != fonction->getParametres()->end() ; it++) {
        analyseParametre((Parametre *)(*it));
    }

    // Ajout des déclaration à la table des symboles
    for (auto it=fonction->getDeclarations()->begin() ; it != fonction->getDeclarations()->end() ; it++) {
        analyseDeclaration((Declaration *)(*it));
    }

    // Analyse du bloc
    BasicBlock * prologue = new BasicBlock (currentCFG, fonction->getNom());
    currentCFG->add_bb(prologue);
    currentCFG->currentBB = prologue;
    analyseBloc(fonction->getBloc());
    cout << "analyseFonction end" <<endl;

}

void ConstructionIR::analyseBloc(Bloc * bloc) {
    cout << "analyseBloc start" <<endl;
    list <Instruction*> * instructions = bloc->getInstructions();

    for (auto it=instructions->begin() ; it!=instructions->end() ; it++) {
        analyseInstruction(*it);
    }
    cout << "analyseBloc end" <<endl;
}

void ConstructionIR::analyseDeclaration(Declaration * declaration) {
    cout<<"analyseDeclaration start"<<endl;
    currentCFG->add_to_symbol_table(declaration->getVariable()->getNom(), declaration->getType());
    cout << "analyseDeclaration end" <<endl;
}

void ConstructionIR::analyseParametre(Parametre * parametre) {
    cout<<"analyseParametre start"<<endl;
    currentCFG->add_to_symbol_table(parametre->getNom(), parametre->getType());
    currentCFG->add_parametre(parametre->getNom());
    cout<<"analyseParametre end"<<endl;
}

void ConstructionIR::analyseInstruction(Instruction * instruction) {
    TypeNoeud typeInstr = instruction->typeNoeud();
    switch (typeInstr) {
        case TypeNoeud::APPELFONC :
            analyseAppelDeFonction((AppelDeFonction *) instruction);
            break;
        case TypeNoeud::AFFECTATION :
            analyseAffectation((Affectation *) instruction);
            break;
        case TypeNoeud::RETURN :
            analyseReturn((Return *) instruction);
            break;
        case TypeNoeud::IF :
            analyseIf((If *) instruction);
            break;
        case TypeNoeud::IFELSE :
            analyseIfElse((IfElse *) instruction);
            break;
        case TypeNoeud::WHILE :
            analyseWhile((While *) instruction);
            break;
        case TypeNoeud::EXPRBIN :
            analyseExprBin((ExprBin *) instruction);
            break;
        case TypeNoeud::EXPRUNAIRE :
            analyseExprUnaire((ExprUnaire *) instruction);
            break;
        case TypeNoeud::EXPR :
            break;
        case TypeNoeud::VARIABLE :
            break;
        case TypeNoeud::NOMBRE :
            break;
        case TypeNoeud::CARACTERE :
            break;
        case TypeNoeud::APPELVARSIMPLE :
            break;
        case TypeNoeud::APPELTABLEAU :
            break;
        case TypeNoeud::BLOC :
            analyseBloc((Bloc *) instruction);
            break;
        case TypeNoeud::BREAK :
            break;
        default:
            cout << "Erreur : on devrait pas passer ici (analyseInstruction)" << endl;
    }
}

void ConstructionIR::analyseExpression(Expression * expression) {
    TypeNoeud typeInstr = expression->typeNoeud();
    switch (typeInstr) {
        case TypeNoeud::APPELFONC :
            analyseAppelDeFonction((AppelDeFonction *) expression);
            break;
        case TypeNoeud::AFFECTATION :
            analyseAffectation((Affectation *) expression);
            break;
        case TypeNoeud::EXPRBIN :
            analyseExprBin((ExprBin *) expression);
            break;
        case TypeNoeud::EXPRUNAIRE :
            analyseExprUnaire((ExprUnaire *) expression);
            break;
        case TypeNoeud::VARIABLE :
            break;
        case TypeNoeud::NOMBRE :
            break;
        case TypeNoeud::CARACTERE :
            break;
        case TypeNoeud::APPELVARSIMPLE :
            break;
        case TypeNoeud::APPELTABLEAU :
            break;
        default:
            cout << "Erreur : on devrait pas passer ici (analyseExpression)" << endl;
    }
}

void ConstructionIR::analyseAffectation(Affectation * affectation) {
    cout<<"analyseAffectation start"<<endl;
    Expression * expression = affectation->getExpression();
    string resultatAffectation;
    vector<string> params;
    string nomVariable = affectation->getNomVariable();
    resultatAffectation = expressionToIR(expression);
    params.push_back(nomVariable);
    params.push_back(resultatAffectation);
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::copy, Type::INT64, params);
    cout<<"analyseAffectation end"<<endl;
}

string ConstructionIR::analyseAppelDeFonction(AppelDeFonction * appelDeFonction) {
    cout<<"analyseAppelDeFonction start"<<endl;
    list<Expression*> * parame = appelDeFonction->getParametres();
    string tempVar ;
    if(parame) {
        TypeNoeud typeInstr;
        vector<string> listParametre;
        listParametre.push_back(appelDeFonction->getNom());
        tempVar = currentCFG->create_new_tempvar(CHAR);
        listParametre.push_back(tempVar);
        for(list<Expression*>::iterator it= parame->begin() ; it != parame->end() ; it++) {
            string nom;
            nom = expressionToIR(*it);
            listParametre.push_back(nom);
        }

        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::call, Type::CHAR, listParametre);
    }
    cout<<"analyseAppelDeFonction end"<<endl;
    return tempVar;
}

void ConstructionIR::analyseReturn(Return * retour) {
    cout<<"analyseReturn start"<<endl;
    Expression * expression = retour->getReturnExpression();
    vector<string> params;
    params.push_back(expressionToIR(expression));
    expression->typage();
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::ret, expression->getType(), params);
    cout<<"analyseReturn end"<<endl;
}

void ConstructionIR::analyseIf(If * i) {
    cout<<"analyseIf start"<<endl;
    analyseExpression(i->getCondition());
    BasicBlock * trueBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    BasicBlock * falseBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->currentBB->exit_true = trueBranch;
    currentCFG->currentBB->exit_false = falseBranch;
    currentCFG->add_bb(trueBranch);
    currentCFG->add_bb(falseBranch);

    currentCFG->currentBB = trueBranch;
    analyseInstruction(i->getInstruction());
    currentCFG->currentBB = falseBranch;
    cout<<"analyseIf end"<<endl;
}

void ConstructionIR::analyseIfElse(IfElse * i) {
    cout<<"analyseIfElse start"<<endl;
    analyseExpression(i->getCondition());
    BasicBlock * trueBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    BasicBlock * falseBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->currentBB->exit_true = trueBranch;
    currentCFG->currentBB->exit_false = falseBranch;
    currentCFG->add_bb(trueBranch);
    currentCFG->add_bb(falseBranch);

    BasicBlock * nextBloc = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(nextBloc);
    trueBranch->exit_true = nextBloc;
    falseBranch->exit_true = nextBloc;

    currentCFG->currentBB = trueBranch;
    analyseInstruction(i->getInstruction());
    vector<string> params;
    params.push_back(nextBloc->label);
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::jmp, NONE, params);

    currentCFG->currentBB = falseBranch;
    analyseInstruction(i->getInstructionElse());

    currentCFG->currentBB = nextBloc;
    cout<<"analyseIfElse end"<<endl;

}

void ConstructionIR::analyseWhile(While * w) {
    cout<<"analyseWhile start"<<endl;
    BasicBlock * whileBloc = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(whileBloc);
    currentCFG->currentBB->exit_true = whileBloc;

    currentCFG->currentBB = whileBloc;
    analyseExpression(w->getCondition());

    BasicBlock * trueBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(trueBranch);
    trueBranch->exit_true = currentCFG->currentBB;
    currentCFG->currentBB->exit_true = trueBranch;

    BasicBlock * falseBranch = new BasicBlock (currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(falseBranch);
    currentCFG->currentBB->exit_false = falseBranch;

    currentCFG->currentBB = trueBranch;
    analyseInstruction(w->getInstruction());
    vector<string> params;
    params.push_back(whileBloc->label);
    currentCFG->currentBB->add_IRInstr(IRInstr::Operation::jmp, NONE, params);
    currentCFG->currentBB = falseBranch;
    cout<<"analyseWhile end"<<endl;
}

string ConstructionIR::expressionToIR(Expression * expression) {
    string chaine;
    TypeNoeud typeNoeud = expression->typeNoeud();
    Nombre * nombre;
    Caractere * caractere;
    AppelDeVariable * variable;
    vector<string> params;
    switch (typeNoeud) {
        case TypeNoeud::EXPRBIN :
            chaine = analyseExprBin((ExprBin *) expression);
            break;
        case TypeNoeud::EXPRUNAIRE :
            chaine = analyseExprUnaire((ExprUnaire *) expression);
            break;
        case TypeNoeud::NOMBRE :
            nombre = (Nombre *) expression;
            chaine = currentCFG->create_new_tempvar(INT64);
            params.push_back(chaine);
            params.push_back(to_string(nombre->getValeur()));
            currentCFG->currentBB->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, params);
            break;
        case TypeNoeud::CARACTERE :
            caractere = (Caractere *) expression;
            chaine = currentCFG->create_new_tempvar(CHAR);
            params.push_back(chaine);
            params.push_back(to_string(caractere->getValeur()));
            currentCFG->currentBB->add_IRInstr(IRInstr::Operation::ldconst, Type::CHAR, params);
            break;
        case TypeNoeud::APPELVARSIMPLE :
            variable = (AppelDeVariableSimple *) expression;
            chaine = variable->getNom();
            break;
        case TypeNoeud::APPELTABLEAU :
            variable = (AppelDeTableau *) expression;
            chaine = variable->getNom();
            break;
        case TypeNoeud::APPELFONC :
            chaine = analyseAppelDeFonction((AppelDeFonction *) expression);
            break;
        default:
            cout << "Erreur : on devrait pas passer ici (expressionToIR)" << endl;
    }
    return chaine;
}

string ConstructionIR::analyseExprBin(ExprBin * expression) {
    cout<<"analyseExprBin start"<<endl;
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
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::add, expression->getType(), params);
        break;
        case MULT:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::mul, expression->getType(), params);
        break;
        case MOINS:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::sub, expression->getType(), params);
        break;
        case DIV:
        break;
        case MOD:
        break;
        case INFS:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_lt, expression->getType(), params);
        break;
        case INF:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_le, expression->getType(), params);
        break;
        case SUPS:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_gt, expression->getType(), params);
        break;
        case SUP:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_ge, expression->getType(), params);
        break;
        case EQUALB:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_eq, expression->getType(), params);
        break;
        case DIFF:
        currentCFG->currentBB->add_IRInstr(IRInstr::Operation::cmp_diff, expression->getType(), params);
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
        case COMMA:
        break;
        default:
        break;
    }
    cout<<"analyseExprBin end"<<endl;
    return tempVar;
}

string ConstructionIR::analyseExprUnaire(ExprUnaire * expression) {
    cout<<"analyseExprUnaire start"<<endl;
    string resultat;

    switch (expression->getSymbole()) {
        case PAR:
        resultat = expressionToIR(expression->getExpression());
        break;
        case NON:
        break;
        case EQUAL:
        break;
        case PPEXP:
        break;
        case MMEXP:
        break;
        case EXPPP:
        break;
        case EXPMM:
        break;
        case XOREQ:
        break;
        case OREQ:
        break;
        case ANDEQ:
        break;
        case MODEQ:
        break;
        case DIVEQ:
        break;
        case MULTEQ:
        break;
        case MOINSEQ:
        break;
        case ADDEQ:
        break;
        case INVERT:
        break;
        case NEGATION:
        break;
        default:
        break;
    }
    cout<<"analyseExprUnaire end"<<endl;
    return resultat;
}
