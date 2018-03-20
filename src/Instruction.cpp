#include "Instruction.h"
#include <iostream>

/* Instruction */
Instruction::Instruction() {
}

/* Break */
Break::Break() {
}

void Break::affiche() {
    cout << "Break";
}

/* Return */
Return::Return(Expression * e) {
    expression = e;
}

void Return::affiche() {
    cout << "Return ";
    expression->affiche();
}

/* Block */
Bloc::Bloc() {
}

Bloc::Bloc(list<Instruction*> * i) {
    instructions = i;
}

list <Instruction*> * Bloc::getInstructions() {
  return instructions;
}

void Bloc::affiche() {
    //if(!instructions->empty()){
    for(auto i = instructions->begin(); i != instructions->end(); i++) {
        (*i)->affiche();
        cout << " ;" << endl;
    }
    //}
}

/* Expression */
Expression::Expression() {
}

/* Appel De Fonction */
AppelDeFonction::AppelDeFonction(string n, list <Expression*> * p) {
    nom = n;
    parametres = p;
}

string AppelDeFonction::getNom() {
    return nom;
}

list <Expression*> * AppelDeFonction::getParametres() {
    return parametres;
}

void AppelDeFonction::affiche() {
    cout << "AppelDeFonction" << endl;
    cout << nom << "(";
    //if(!parametres->empty()){
    for(auto i = parametres->begin(); i != parametres->end(); i++) {
        (*i)->affiche();
        cout << ", ";
    }
    cout << ")";
    //}
}

/* Expression Binaire */
ExprBin::ExprBin(Expression * g, Expression * d, Symbole s) {
    gauche = g;
    droite = d;
    symbole = s;
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

void ExprBin::affiche() {
    gauche->affiche();
    cout << " " << symbolesEtiquettes[symbole] << " ";
    droite->affiche();
}

/* Expression unaire */
ExprUnaire::ExprUnaire(Expression * e, Symbole s) {
    expression = e;
    symbole = s;
}

Expression * ExprUnaire::getExpression() {
    return expression;
}

Symbole ExprUnaire::getSymbole() {
    return symbole;
}

void ExprUnaire::affiche() {
    switch (symbole) {
        case PPEXP | MMEXP | INVERT | NEGATION: {
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

/* Nombre */
Nombre::Nombre() {
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

/* Caractère */
Caractere::Caractere() {
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

/* Variable */
Variable::Variable() {
}

Variable::Variable(string n) {
    nom = n;
}

string Variable::getNom() {
    return nom;
}

/* Tableau */
Tableau::Tableau(string n) : Variable(n) {
    initialise = false;
}

Tableau::Tableau(string n, Expression * c) : Variable(n) {
    caseAccedee = c;
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
    cout << nom<<"[";
    if (caseAccedee) {
        cout << caseAccedee;
    }
    cout << "]";
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

/* Affectation */
Affectation::Affectation(Variable * v, Expression * e) {
    lValue = v;
    expression = e;
}

Variable * Affectation::getLValue() {
    return lValue;
}

Expression * Affectation::getExpression() {
    return expression;
}

void Affectation::affiche() {
    lValue->affiche();
    cout << " = ";
    expression->affiche();
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

IfElse::IfElse() {
}

IfElse::IfElse(Expression * e, Instruction * i, Instruction * iElse) : If(e, i) {
    instructionElse = iElse;
}

Instruction * IfElse::getInstructionElse() {
    return instructionElse;
}

void IfElse::affiche() {
    cout << "else ";
    instructionElse->affiche();
    cout << endl;
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
