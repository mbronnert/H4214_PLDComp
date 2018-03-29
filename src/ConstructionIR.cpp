#include "ConstructionIR.h"

ConstructionIR::ConstructionIR(list <CFG*> * l, BasicBlock * b) {
    listeCFG = l;
    currentBB = b;
}

ConstructionIR::~ConstructionIR(){

}

void ConstructionIR::analyseProgramme(Programme * programme) {
    // TODO : faire les déclarations
    for (auto it=programme->getDeclarations()->begin() ; it != programme->getDeclarations()->end() ; it++) {
        analyseDeclaration((Declaration *)(*it));
    }

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
    currentBB = prologue;
    analyseBloc(fonction->getBloc());

}

void ConstructionIR::analyseBloc(Bloc * bloc) {
    list <Instruction*> * instructions = bloc->getInstructions();

    for (auto it=instructions->begin() ; it!=instructions->end() ; it++) {
        TypeNoeud typeNoeud = (*it)->typeNoeud();
        switch (typeNoeud) {
            case TypeNoeud::EXPRBIN :
                analyseExprBin((ExprBin *)(*it));
                break;
            case TypeNoeud::RETURN :
                break;
            case TypeNoeud::BREAK :
                break;
            case TypeNoeud::EXPR :
                break;
            case TypeNoeud::EXPRUNAIRE :
                break;
            case TypeNoeud::APPELFONC :
                break;
            case TypeNoeud::DECLARATION :
                break;
            case TypeNoeud::AFFECTATION :
                break;
            case TypeNoeud::VARIABLE :
                break;
            case TypeNoeud::NOMBRE :
                break;
            case TypeNoeud::CARACTERE :
                break;
            case TypeNoeud::APPELVAR :
                break;
            case TypeNoeud::IF :
                break;
            case TypeNoeud::IFELSE :
                break;
            case TypeNoeud::WHILE :
                break;
            case TypeNoeud::BLOC :
                break;
        }
    }
}

void ConstructionIR::analyseDeclaration(Declaration * declaration) {
    currentCFG->add_to_symbol_table(declaration->getVariable()->getNom(), declaration->getType());
}

string ConstructionIR::expressionToIR(Expression * expression) {
    TypeNoeud typeNoeud = expression->typeNoeud();
    switch (typeNoeud) {
        case TypeNoeud::EXPRBIN :
            analyseExprBin((ExprBin *) expression);
            break;
        case TypeNoeud::EXPRUNAIRE :
            break;
        case TypeNoeud::EXPR :
            break;
        case TypeNoeud::APPELFONC :
            break;
        case TypeNoeud::DECLARATION :
            break;
        case TypeNoeud::AFFECTATION :
            break;
        case TypeNoeud::VARIABLE :
            break;
        case TypeNoeud::NOMBRE :
            break;
        case TypeNoeud::CARACTERE :
            break;
        case TypeNoeud::APPELVAR :
            break;
        case TypeNoeud::IF :
            break;
        case TypeNoeud::IFELSE :
            break;
        case TypeNoeud::WHILE :
            break;
        case TypeNoeud::BLOC :
            break;
        case TypeNoeud::RETURN :
            break;
        case TypeNoeud::BREAK :
            break;
    }
}

void ConstructionIR::analyseExprBin(ExprBin * expression) {
    string resultat;
    string resultatGauche;
    string resultatDroite;
    vector<string> params;

    resultatGauche = expressionToIR(expression->getGauche());
    resultatDroite = expressionToIR(expression->getDroite());
    // TODO : il faut ajouter le "d" du commentaire des params

    params.push_back(resultatGauche);
    params.push_back(resultatDroite);

    switch (expression->getSymbole()) {
        case ADD:
        currentBB->add_IRInstr(IRInstr::Operation::add, Type::INT64, params);
        break;
        case MULT:
        currentBB->add_IRInstr(IRInstr::Operation::mul, Type::INT64, params);
        break;
        case MOINS:
        currentBB->add_IRInstr(IRInstr::Operation::sub, Type::INT64, params);
        break;
        case DIV: //TODO : ajouter les autres types d'opération
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
