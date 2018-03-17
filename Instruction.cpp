#include "Instruction.h"

Instruction::Instruction() {
}

Break::Break() {
}

Return::Return() {
}

Bloc::Bloc() {
}

Bloc::Bloc(list<Instruction> * i) {
  instructions = i;
}

Expression::Expression() {
}

AppelDeFonction::AppelDeFonction(string n, list <Expression> * p) {
    nom = n;
    parametres = p;
}

ExprBin::ExprBin(Expression g, Expression d, Symbole s) {
    gauche = g;
    droite = d;
    symbole = s;
}

ExprUnaire::ExprUnaire(Expression e, Symbole s) {
    exp = e;
    symbole = s;
}

Nombre::Nombre(int v) {
    valeur = v;
}

Caractere::Caractere(char v) {
    valeur = v;
}

Variable::Variable() {
}

Variable::Variable(string n, Type t) {
    nom = n;
    type = t;
}

Tableau::Tableau(string n, Type t, int ta) : Variable(n, t) {
  taille = ta;
  initialise = false;
}

Tableau::Tableau(string n, Type t, int ta, list <int> * v) : Variable(n, t) {
  taille = ta;
  tabEntiers = v;
  initialise = true;
}

Tableau::Tableau(string n, Type t, int ta, list <char> * v) : Variable(n, t) {
  taille = ta;
  tabCaracteres = v;
  initialise = true;
}

VariableSimple::VariableSimple(string n, Type t) : Variable(n, t) {
  initialise = false;
}

VariableSimple::VariableSimple(string n, Type t, int v) : Variable(n, t) {
  valeurEntiere = v;
  initialise = true;
}

VariableSimple::VariableSimple(string n, Type t, char v) : Variable(n, t) {
  valeurCaractere = v;
  initialise = true;
}

Affectation::Affectation(Variable v, Expression e) {
    lValue = v;
    exp = e;
}

Structure::Structure() {
}

If::If() {
}

If::If(Expression exp) {

}

While::While() {
}

While::While(Expression exp) {
  condition = exp;
}
