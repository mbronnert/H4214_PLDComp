#ifndef Instruction_h
#define Instruction_h

#include <stdio.h>
#include <string>
#include <list>

using namespace std;

enum Symbole {ADD, MULT, MOINS, DIV, MOD, PAR, INFS, INF, SUPS, SUP, NON, EQUALB, DIFF, ANDB, ORB, AND, OR, POW, DECG, DECD, EQUAL, PPEXP, MMEXP, EXPPP, EXPMM, XOREQ, OREQ, ANDEQ, MODEQ, DIVEQ, MULTEQ, MOINSEQ, ADDEQ, INVERT, NEGATION };
enum Type {CHAR, INT32, INT64, VOID};

class Expression;

class Instruction {
    public:
        Instruction();
        void affiche();
        Instruction * getInstruction();
    private:
        Instruction * instruction;
};


class Break : public Instruction {
    public:
        Break();
};

class Return : public Instruction {
    public:
        Return(Expression * e);
        void affiche();
        Expression * getExpression();
    private:
        Expression * exp;
};

class Bloc : public Instruction {
    public:
        Bloc();
        Bloc(list<Instruction> * i);
        list <Instruction> * getInstructions();
        void affiche();
      private:
        list <Instruction> * instructions;
};

class Expression : public Instruction {
    public:
        Expression();
        void affiche();
        Expression * getExpression();
    private:
        Expression * exp;
};

class AppelDeFonction : public Expression {
    public:
        AppelDeFonction(string n, list<Expression> * param);
        string getNom();
        void affiche();
        list <Expression> * getParametres();
    private:
        string nom;
        list <Expression> * parametres;
};

class ExprBin : public Expression {
    public:
        ExprBin(Expression * g, Expression * d, Symbole s);
        void affiche();
        Expression * getGauche();
        Expression * getDroite();
        Symbole getSymbole();
    private:
        Expression * gauche;
        Expression * droite;
        Symbole symbole;
};

class ExprUnaire : public Expression {
    public:
        ExprUnaire(Expression * e, Symbole s);
        void affiche();
        Expression * getExpression();
        Symbole getSymbole();
    private:
        Expression * exp; //TODO: c'est pas plutot une variable ?
        Symbole symbole;
};

class Nombre : public Expression {
    public:
      Nombre();
        Nombre(int v);
        void affiche();
        int getValeur();
    private:
        int valeur;
};

class Caractere : public Expression {
    public:
      Caractere();
        Caractere(char v);
        void affiche();
        int getValeur();
    private:
        int valeur;
};

class Variable : public Expression {
    public:
        Variable();
        Variable(string n);
        string getNom();
        void affiche();
    protected:
        string nom;
        bool initialise;
};

class Tableau : public Variable {
    public:
        Tableau(string n);
        Tableau(string n, Expression * c);
        Tableau(string n, list <Nombre> * v);
        Tableau(string n, list <Caractere> * v);
        list <Nombre> * getTabNombres();
        list <Caractere> * getTabCaracteres();
        void affiche();
      private:
        list <Nombre> * tabNombres;
        list <Caractere> * tabCaracteres;
        Expression * caseAccedee;
};

class VariableSimple : public Variable {
    public:
        VariableSimple(string n);
        VariableSimple(string n, Nombre v);
        VariableSimple(string n, Caractere v);
        Nombre getNombre();
        Caractere getCaractere();
        void affiche();
      private:
        Nombre nombre;
        Caractere caractere;
};

class Affectation : public Expression {
    public:
        Affectation(Variable * v, Expression * e);
        Variable * getLValue();
        void affiche();
        Expression * getExpression();
    private:
        Variable * lValue;
        Expression * exp;
};

class Structure : public Instruction {
    public:
        Structure();
    private:
};

class If : public Structure {
    public:
        If();
        If(Expression * exp, Instruction * i);
        Expression * getCondition();
        Instruction * getInstruction();
        void affiche();
    protected:
        Expression * condition;
        Instruction * instruction;
};

class IfElse : public If {
    public:
        IfElse();
        IfElse(Expression * exp, Instruction * i, Instruction * iElse);
        Instruction * getInstructionElse();
        void affiche();
    private:
        Instruction * instructionElse;
};

class While : public Structure {
    public:
        While(Expression * exp, Instruction * i);
        While();
        Expression * getCondition();
        Instruction * getInstruction();
        void affiche();
    private:
        Expression * condition;
        Instruction * instruction;
};

#endif
