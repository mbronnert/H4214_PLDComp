#include "Instruction.h"
#include <iostream>

/* Instruction */
Instruction::Instruction() {
}

Instruction * Instruction::getInstruction() {
    return instruction;
}

void Instruction::affiche() {
    cout << "Instruction " << endl;
    //instruction->affiche();
}

/* Break */
Break::Break() {
}

/* Return */
Return::Return(Expression * e) {
    exp = e;
}

Expression * Return::getExpression() {
    return exp;
}

void Return::affiche() {
    cout << "Return " << endl;
    exp->affiche();
}

/* Block */
Bloc::Bloc() {
}

Bloc::Bloc(list<Instruction> * i) {
    instructions = i;
}

list <Instruction> * Bloc::getInstructions() {
  return instructions;
}

void Bloc::affiche() {
    cout << "{ " << endl;
    if(!instructions->empty()){
        for(auto i = instructions->begin(); i != instructions->end(); i++) {
            i->affiche();
        }
    }
    cout << "} " << endl;
}

/* Expression */
Expression::Expression() {
}

Expression * Expression::getExpression() {
    return exp;
}

void Expression::affiche() {
    cout << "Expression" << endl;
    exp->affiche();
}

/* Appel De Fonction */
AppelDeFonction::AppelDeFonction(string n, list <Expression> * p) {
    nom = n;
    parametres = p;
}

string AppelDeFonction::getNom() {
    return nom;
}

list <Expression> * AppelDeFonction::getParametres() {
    return parametres;
}

void AppelDeFonction::affiche() {
    cout << "AppelDeFonction" << endl;
    cout << nom <<endl;
    if(!parametres->empty()){
        for(auto i = parametres->begin(); i != parametres->end(); i++) {
            i->affiche();
        }
    }
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
    cout << "Expression Binaire : " << symbole << endl;
    droite->affiche();
}

/* Expression unaire */
ExprUnaire::ExprUnaire(Expression * e, Symbole s) {
    exp = e;
    symbole = s;
}

Expression * ExprUnaire::getExpression() {
    return exp;
}

Symbole ExprUnaire::getSymbole() {
    return symbole;
}

void ExprUnaire::affiche() {
    cout << "Expression Unaire : " << symbole << endl;
    exp->affiche();
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
    cout << "Nombre" << endl;
    cout << valeur << endl;
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
    cout << "Caractere"<< endl;
    cout << valeur << endl;
}

/* Variable */
Variable::Variable() {
}

Variable::Variable(string n, Type t) {
    nom = n;
    type = t;
}

Type Variable::getType() {
    return type;
}

string Variable::getNom() {
    return nom;
}

void Variable::affiche() {
    cout << "Variable" << endl;
    cout << type << nom << endl;
}

/* Tableau */
Tableau::Tableau(string n, Type t, int ta) : Variable(n, t) {
    taille = ta;
    initialise = false;
}

Tableau::Tableau(string n, Type t, int ta, list <Nombre> * v) : Variable(n, t) {
    taille = ta;
    tabNombres = v;
    initialise = true;
}

Tableau::Tableau(string n, Type t, int ta, list <Caractere> * v) : Variable(n, t) {
    taille = ta;
    tabCaracteres = v;
    initialise = true;
}

int Tableau::getTaille() {
    return taille;
}

list <Nombre> * Tableau::getTabNombres(){
    return tabNombres;
}

list <Caractere> * Tableau::getTabCaracteres() {
    return tabCaracteres;
}

void Tableau::affiche() {
    cout << "Tableau [" << taille << "]" << endl;
}

/* Variable Simple */
VariableSimple::VariableSimple(string n, Type t) : Variable(n, t) {
  initialise = false;
}

VariableSimple::VariableSimple(string n, Type t, Nombre v) : Variable(n, t) {
  nombre = v;
  initialise = true;
}

VariableSimple::VariableSimple(string n, Type t, Caractere v) : Variable(n, t) {
  caractere = v;
  initialise = true;
}

Nombre VariableSimple::getNombre(){
    return nombre;
}

Caractere VariableSimple::getCaractere(){
    return caractere;
}

void VariableSimple::affiche() {
    if(nombre.getValeur())
      cout << nombre.getValeur() << endl;
    if(!caractere.getValeur())
      cout << caractere.getValeur() << endl;
}

/* Affectation */
Affectation::Affectation(Variable * v, Expression * e) {
    lValue = v;
    exp = e;
}

Variable * Affectation::getLValue() {
    return lValue;
}

Expression * Affectation::getExpression() {
    return exp;
}

void Affectation::affiche() {
    cout << "Affectation " << endl;
    cout << "Variable "<< endl;
    lValue->affiche();
    cout << "Expression "<< endl;
    exp->affiche();
}

/* Structure */
Structure::Structure() {
}

/* IF/ELSE */
If::If() {
}

If::If(Expression * exp, Instruction * i) {
  condition = exp;
  instruction = i;
}

Expression * If::getCondition() {
    return condition;
}

Instruction * If::getInstruction() {
    return instruction;
}

void If::affiche() {
    cout << "If " << endl;
    condition->affiche();
    instruction->affiche();
}

IfElse::IfElse() {
}

IfElse::IfElse(Expression * exp, Instruction * i, Instruction * iElse) : If(exp, i) {
    instructionElse = iElse;
}

Instruction * IfElse::getInstructionElse() {
    return instructionElse;
}

void IfElse::affiche() {
    cout << "IfElse " << endl;
    instructionElse->affiche();
}

/* WHILE */
While::While() {
}

While::While(Expression * exp, Instruction * i) {
    condition = exp;
    instruction = i;
}

Expression * While::getCondition() {
    return condition;
}

Instruction * While::getInstruction() {
    return instruction;
}

void While::affiche() {
    cout << "While " << endl;
    condition->affiche();
    instruction->affiche();
}
