#ifndef Programme_h
#define Programme_h

#include <stdio.h>
#include <string>
#include <list>

#include "Parametre.h"

using namespace std;

enum Symbole {ADD, MULT, MOINS, DIV, MOD, OUVREPAR, FERMEPAR, INFS, INF, SUPS, SUP, NON, EQUALB, DIFF, ANDB, ORB, AND, OR, POW, DECG, DECD, EQUAL, PP, MM };


class Instruction {
public:
    Instruction();
private:
};

#endif

class Break : public Instruction {
public:
    Break();
};

class Return : public Instruction {
public:
    Return();
};

class Block : public Instruction {
public:
    Block();
};

class Expression : public Instruction {
public:
    Expression();
};

class AppelDeFonction : public Expression {
public:
    AppelDeFonction(string n, list<Expression> param);
private:
    string nom;
    list <Expression> parametres;
};

class ExprBin : public Expression {
public:
    ExprBin(Expression g, Expression d, Symbole s);
private:
    Expression gauche;
    Expression droite;
    Symbole symbole;
};

class ExprUnaire : public Expression {
public:
    ExprUnaire(Expression e, Symbole s);
private:
    Expression exp;
    Symbole symbole;
};

class Nombre : public Expression {
public:
    Nombre(int v);
private:
    int valeur;
};

class Caractere : public Expression {
public:
    Caractere(char v);
private:
    int valeur;
};

class Variable : public Expression {
public:
    Variable();
    Variable(string n);
private:
    string nom;
};

class Tableau : public Variable {
public:
    Tableau();
};

class VariableSimple : public Variable {
public:
    VariableSimple();
};

class Affectation : public Expression {
public:
    Affectation(Variable v, Expression e);
private:
    Variable lValue;
    Expression exp;
};

class Structure : public Instruction {
public:
    Structure();
    Structure(Expression exp);
private:
    Expression condition;
};

class If : public Structure {
public:
    If();
};

class While : public Structure {
public:
    While();
};
