#include "Instruction.h"
#include <iostream>

/* Instruction */
Instruction::Instruction() {
}
Instruction::~Instruction() {
}

/* Break */
Break::Break() {
}
Break::~Break() {
}
void Break::affiche() {
    cout << "Break";
}

TypeNoeud Break::typeNoeud() {
    return TypeNoeud::BREAK;
}

/* Return */
Return::Return(Expression * e) {
    expression = e;
}
Return::~Return() {}
    
void Return::affiche() {
    cout << "Return ";
    expression->affiche();
}

TypeNoeud Return::typeNoeud() {
    return TypeNoeud::RETURN;
}

Expression * Return::getReturnExpression() {
    return expression;
}

/* Block */
Bloc::Bloc() {
}
Bloc::~Bloc() {
}
Bloc::Bloc(list<Instruction*> * i) {
    instructions = i;
}

list <Instruction*> * Bloc::getInstructions() {
  return instructions;
}

void Bloc::resolutionPortee(int *contextGlobal, list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction) {
    
    int contextLocal = ++(*contextGlobal);
    int nivPile = 0;
    
    list<Instruction *>::iterator it = instructions->begin() ;
    while ( it != this->instructions->end() ) {
		
	  if (dynamic_cast<IfElse *>(*it)) {

        IfElse *s = (IfElse *)*it; 
        s->getCondition()->resolutionPortee(pileVariable, mapVariable, pileFonction);
        Bloc *b1 = (Bloc *) s->getInstruction();        
        b1->resolutionPortee(contextGlobal, pileVariable, mapVariable, pileFonction);
        Bloc *b2 = (Bloc *) s->getInstructionElse();        
        b2->resolutionPortee(contextGlobal, pileVariable, mapVariable, pileFonction);

      } else if (dynamic_cast<If *>(*it)) {

        If *s = (If *)*it;   
        s->getCondition()->resolutionPortee(pileVariable, mapVariable, pileFonction);
        Bloc *b = (Bloc *) s->getInstruction();       
        b->resolutionPortee(contextGlobal, pileVariable, mapVariable, pileFonction); 

      } else if (dynamic_cast<While *>(*it)) {

        While *s = (While *)*it;        
        s->getCondition()->resolutionPortee(pileVariable, mapVariable, pileFonction);
        Bloc *b = (Bloc *) s->getInstruction();        
        b->resolutionPortee(contextGlobal, pileVariable, mapVariable, pileFonction);

      } else if (dynamic_cast<Expression *>(*it)) {

        Expression *e = (Expression *)*it;
        e->resolutionPortee(pileVariable, mapVariable, pileFonction);

      } 

      it++;
    }
        
    while(nivPile > 0) {
      pileVariable->pop_back();
      nivPile--;
    }
}

void Bloc::affiche() {

    for(auto i = instructions->begin(); i != instructions->end(); i++) {
        (*i)->affiche();
        cout << " ;" << endl;
    }

}

TypeNoeud Bloc::typeNoeud() {
    return TypeNoeud::BLOC;
}

/* Expression */
Expression::Expression() {
}
Expression::~Expression() {
}

Type Expression::getType() {
    return type;
}

/* Appel De Fonction */
AppelDeFonction::AppelDeFonction(string n, list <Expression*> * p) {
    nom = n;
    parametres = p;
}

AppelDeFonction::~AppelDeFonction() {
}

string AppelDeFonction::getNom() {
    return nom;
}

list <Expression*> * AppelDeFonction::getParametres() {
    return parametres;
}

void AppelDeFonction::resolutionPortee(list<string> *pileVariable, map<string,Declaration *> *mapVariable, list<string> *pileFonction) {
  
    bool fonctionFound = false;
    
    list<string>::iterator it = pileFonction->begin() ;
    while ( it != pileFonction->end() && fonctionFound == false) {

        if(*it == nom || nom == "putchar" || nom == "getchar") {
          fonctionFound = true;
        } 
        it++;
        
    }
    
    if(fonctionFound == true) {
        Fonction *fonction;
      
       list<Expression *>::iterator it = parametres->begin() ;
       while ( it != parametres->end() ) {

            (*it)->resolutionPortee(pileVariable,mapVariable,pileFonction);  
            it++;
        }
      
    } else {
        cerr << "ERREUR! fonction <<"+nom+">> non déclarée! " << endl;
        // exit(0);
    }

}

void AppelDeFonction::affiche() {
    cout << "AppelDeFonction" << endl;
    cout << nom << "(";

    for(auto i = parametres->begin(); i != parametres->end(); i++) {
        (*i)->affiche();
        cout << ", ";
    }
    cout << ")";

}

TypeNoeud AppelDeFonction::typeNoeud() {
    return TypeNoeud::APPELFONC;
}

/* Expression Binaire */
ExprBin::ExprBin(Expression * g, Expression * d, Symbole s) {
    gauche = g;
    droite = d;
    symbole = s;
}

ExprBin::~ExprBin() {
}

Expression * ExprBin::getGauche() {
    return gauche;
}

Expression * ExprBin::getDroite() {
    return droite;
}

Symbole ExprBin::getSymbole() {
    return symbole;
}

void ExprBin::resolutionPortee(list<string> *pileVariable, map<string,Declaration *> *mapVariable, list<string> *pileFonction) {
    gauche->resolutionPortee(pileVariable, mapVariable, pileFonction);
    droite->resolutionPortee(pileVariable, mapVariable, pileFonction);
}

void ExprBin::affiche() {
    gauche->affiche();
    cout << " " << symbolesEtiquettes[symbole] << " ";
    droite->affiche();
}

TypeNoeud ExprBin::typeNoeud() {
    return TypeNoeud::EXPRBIN;
}

void ExprBin::typage() {
    gauche->typage();
    droite->typage();
      
    Type typeGauche = gauche->getType();
    Type typeDroite = droite->getType();  
    Type typeExpr;
      
    if(symbole == EQUAL) {
        typeExpr = typeDroite;
        
    } else if(symbole == ADD || symbole == MULT || symbole == MOINS || symbole == DIV || symbole == MOD || symbole == ADDEQ || symbole == MULTEQ || symbole == MOINSEQ || symbole == DIVEQ || symbole == MODEQ) {
        
        if(typeGauche == INT64 && typeDroite == INT64) {
            typeExpr = INT64;

        } else if((typeGauche == INT64 && typeDroite == INT32) || (typeGauche == INT32 && typeDroite == INT64)) {
            typeExpr = INT64;

        } else if((typeGauche == INT64 && typeDroite == CHAR) || (typeGauche == CHAR && typeDroite == INT64)) {
            typeExpr = INT64;

        } else if(typeGauche == INT32 && typeDroite == INT32) {
            typeExpr = INT32;

        } else if((typeGauche == CHAR && typeDroite == INT32) || (typeGauche == INT32 && typeDroite == CHAR)) {
            typeExpr = INT32;

        } else if(typeGauche == CHAR && typeDroite == CHAR) {
            typeExpr = CHAR;

        } 
        
    } else if(symbole == ANDB || symbole == ORB || symbole == EQUALB || symbole == INF || symbole == INFS || symbole == SUP || symbole == SUPS || symbole == ANDEQ || symbole == OREQ || symbole == DIFF) {
        typeExpr = INT32;
        
    } else if(symbole == AND || symbole == OR || symbole == POW) {
        typeExpr = INT64;
      
    } else if(symbole == DECG || symbole == DECD) {
        typeExpr = typeGauche;
        
    }
      
    this->type = typeExpr;
}

/* Expression unaire */
ExprUnaire::ExprUnaire(Expression * e, Symbole s) {
    expression = e;
    symbole = s;
}

ExprUnaire::~ExprUnaire() {
}

Expression * ExprUnaire::getExpression() {
    return expression;
}

Symbole ExprUnaire::getSymbole() {
    return symbole;
}

void ExprUnaire::resolutionPortee(list<string> *pileVariable, map<string,Declaration *> *mapVariable, list<string> *pileFonction) {
  expression->resolutionPortee(pileVariable, mapVariable, pileFonction);
}

void ExprUnaire::affiche() {
    switch (symbole) {
        case PPEXP | MMEXP: {
            expression->affiche();
            cout << symbole;
        }
        case EXPPP | EXPMM: {
            cout << symbole;
            expression->affiche();
        }
        case PAR : {
            cout << "(";
            expression->affiche();
            cout << ")";
        }
        default :
        {
            cout << symbole;
            expression->affiche();
        }
    }

    //
}

void ExprUnaire::typage() {
    expression->typage();
    this->type = expression->getType();
}

TypeNoeud ExprUnaire::typeNoeud() {
    return TypeNoeud::EXPRUNAIRE;
}

/* Nombre */
Nombre::Nombre() {
}

Nombre::~Nombre() {
}

Nombre::Nombre(int v) {
    valeur = v;
}

int Nombre::getValeur() {
    return valeur;
}

void Nombre::affiche() {
    cout << valeur;
}

TypeNoeud Nombre::typeNoeud() {
    return TypeNoeud::NOMBRE;
}

/* Caractère */
Caractere::Caractere() {
}

Caractere::~Caractere() {
}

Caractere::Caractere(char v) {
    valeur = v;
}

int Caractere::getValeur() {
    return valeur;
}

void Caractere::affiche() {
    cout << "Caractere : " << valeur;
}

TypeNoeud Caractere::typeNoeud() {
    return TypeNoeud::CARACTERE;
}

/* Variable */
Variable::Variable() {
}

Variable::~Variable() {
}

Variable::Variable(string n) {
    nom = n;
}

string Variable::getNom() {
    return nom;
}

void Variable::setNom(string nom){
    nom = nom;
}

void Variable::setInitialise(bool i) {
    initialise = i;
}

bool Variable::getInitialise () {
    return initialise;

}

TypeNoeud Variable::typeNoeud() {
    return TypeNoeud::VARIABLE;
}

/* Tableau */
Tableau::Tableau(string n) : Variable(n) {
    initialise = false;
}

Tableau::Tableau(string n, list <Nombre*> * v) : Variable(n) {
    tabNombres = v;
    initialise = true;
}

Tableau::Tableau(string n, list <Caractere*> * v) : Variable(n) {
    tabCaracteres = v;
    initialise = true;
}

list <Nombre*> * Tableau::getTabNombres(){
    return tabNombres;
}

list <Caractere*> * Tableau::getTabCaracteres() {
    return tabCaracteres;
}

void Tableau::affiche() {
    cout << nom<<"[]";
}

/* Variable Simple */
VariableSimple::VariableSimple(string n) : Variable(n) {
  initialise = false;
}

VariableSimple::VariableSimple(string n, Nombre * v) : Variable(n) {
  nombre = v;
  initialise = true;
}

VariableSimple::VariableSimple(string n, Caractere * v) : Variable(n) {
  caractere = v;
  initialise = true;
}

Nombre * VariableSimple::getNombre(){
    return nombre;
}

Caractere * VariableSimple::getCaractere(){
    return caractere;
}

void VariableSimple::affiche() {
    cout << nom;
    if (initialise) {
        cout << " = ";
        if(nombre->getValeur())
          cout << nombre->getValeur() << endl;
        if(!caractere->getValeur())
          cout << caractere->getValeur() << endl;
    }
}

/* AppelDeVariable */

AppelDeVariable::AppelDeVariable() {
}

AppelDeVariable::AppelDeVariable(string n) {
    nom = n;
}

string AppelDeVariable::getNom() {
    return nom;
}

void AppelDeVariable::setNom(string nom){
    nom = nom;
}

void AppelDeVariable::resolutionPortee(list<string> *pileVariable, map<std::string,Declaration *> *mapVariable, list<string> *pileFonction) {
 
    string nomVar = this->getNom();
    bool variableFound = false;

    list<string> pile = *pileVariable;
    pile.reverse();
    list<string>::iterator it = pile.begin() ;

    while ( it != pile.end() && variableFound == false ) {
        
        string nom = *it;
        int rawNom = nom.find_first_of('_');
        nom = nom.substr(rawNom+1); 
 
        if(nom == nomVar) {
            variableFound = true;
            this->setNom(*it);
            map<string, Declaration *>::iterator variableDec = mapVariable->find(*it);
            if(variableDec != mapVariable->end()) {
              this->type = variableDec->second->getType();    
            }
        }
 
        it++;
    }
 
    if(variableFound == false) {
        cerr << "ERREUR! variable <<"+nomVar+">> non déclarée! " << endl;
        // exit(0);
    }

}

TypeNoeud AppelDeVariable::typeNoeud() {
    return TypeNoeud::APPELVAR;
}

/* AppelDeTableau */
AppelDeTableau::AppelDeTableau(string n) : AppelDeVariable(n) {
}

AppelDeTableau::AppelDeTableau(string n, Expression * c) : AppelDeVariable(n) {
    caseAccedee = c;
}

list <Nombre*> * AppelDeTableau::getTabNombres(){
    return tabNombres;
}

list <Caractere*> * AppelDeTableau::getTabCaracteres() {
    return tabCaracteres;
}

void AppelDeTableau::affiche() {
    cout << nom<<"[";
    if (caseAccedee) {
        cout << caseAccedee;
    }
    cout << "]";
}

/* AppelDeVariable Simple */
AppelDeVariableSimple::AppelDeVariableSimple(string n) : AppelDeVariable(n) {
}

Nombre * AppelDeVariableSimple::getNombre(){
    return nombre;
}

Caractere * AppelDeVariableSimple::getCaractere(){
    return caractere;
}

void AppelDeVariableSimple::affiche() {
    cout << nom;
}

/* Affectation */
Affectation::Affectation(AppelDeVariable * v, Expression * e) {
    lValue = v;
    expression = e;
}

AppelDeVariable * Affectation::getLValue() {
    return lValue;
}

Expression * Affectation::getExpression() {
    return expression;
}

string Affectation::getNomVariable() {
    return lValue->getNom();
}

void Affectation::affiche() {
    lValue->affiche();
    cout << " = ";
    expression->affiche();
}

void Affectation::resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction) {
    lValue->resolutionPortee(pileVariable, mapVariable, pileFonction);
}

TypeNoeud Affectation::typeNoeud() {
    return TypeNoeud::AFFECTATION;
}

/* Structure */
Structure::Structure() {
}

/* IF/ELSE */
If::If() {
}

If::If(Expression * e, Instruction * i) {
  condition = e;
  instruction = i;
}

Expression * If::getCondition() {
    return condition;
}

Instruction * If::getInstruction() {
    return instruction;
}

void If::affiche() {
    cout << "if (";
    condition->affiche();
    cout << ") ";
    instruction->affiche();
    cout << endl;
}

TypeNoeud If::typeNoeud() {
    return TypeNoeud::IF;
}

IfElse::IfElse() {
}

IfElse::IfElse(Expression * e, Instruction * i, Instruction * iElse) : If(e, i) {
    instructionElse = iElse;
    instruction = i;
}

Instruction * IfElse::getInstruction() {
    return instruction;
}

Instruction * IfElse::getInstructionElse() {
    return instructionElse;
}

void IfElse::affiche() {
    cout << "else ";
    instructionElse->affiche();
    cout << endl;
}

TypeNoeud IfElse::typeNoeud() {
    return TypeNoeud::IFELSE;
}

/* WHILE */
While::While() {
}

While::While(Expression * e, Instruction * i) {
    condition = e;
    instruction = i;
}

Expression * While::getCondition() {
    return condition;
}

Instruction * While::getInstruction() {
    return instruction;
}

void While::affiche() {
    cout << "while (" << endl;
    condition->affiche();
    cout << ") ";
    instruction->affiche();
    cout << endl;
}

TypeNoeud While::typeNoeud() {
    return TypeNoeud::WHILE;
}
