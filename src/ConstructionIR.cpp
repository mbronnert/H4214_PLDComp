#include "ConstructionIR.h"

ConstructionIR::ConstructionIR(list <CFG*> * l, BasicBlock * b) {
    listeCFG = l;
    currentCFG->currentBB = b;
}

void ConstructionIR::analyseProgramme(Programme * programme) {
    // TODO : faire les déclarations

    for (auto it=programme->getFonctions()->begin() ; it != programme->getFonctions()->end() ; it++) {
        CFG * cfg = new CFG(*it);
        listeCFG->push_back(cfg);
        currentCFG = cfg;
        analyseFonction(*it);
    }
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
        // TypeNoeud typeNoeud = (*it)->typeNoeud();
        // switch (typeNoeud) {
        //     case TypeNoeud::exprBin :
        //         analyseExprBin((ExprBin *)(*it));
        //         break;
        //     // TODO: autres cas
        // }
    }
}

void ConstructionIR::analyseDeclaration(Declaration * declaration) {
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
