#include "Instruction.h"

Instruction::Instruction() {
}

Break::Break() {
}

Return::Return() {
}

Block::Block() {
}

Expression::Expression() {
}

AppelDeFonction::AppelDeFonction(string n, list <Expression> p) {
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

Variable::Variable(string n) {
    nom = n;
}

Tableau::Tableau() {
}

VariableSimple::VariableSimple() {
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
