#ifndef Instruction_h
#define Instruction_h

#include <stdio.h>
#include <string>
#include <list>

using namespace std;

enum Symbole {ADD, MULT, MOINS, DIV, MOD, PAR, INFS, INF, SUPS, SUP, NON, EQUALB, DIFF, ANDB, ORB, AND, OR, POW, DECG, DECD, EQUAL, PPEXP, MMEXP, EXPPP, EXPMM };
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
        Nombre(int v);
        void affiche();
        int getValeur();
    private:
        int valeur;
};

class Caractere : public Expression {
    public:
        Caractere(char v);
        void affiche();
        int getValeur();
    private:
        int valeur;
};

class Variable : public Expression {
    public:
        Variable();
        Variable(string n, Type t);
        Type getType();
        string getNom();
        void affiche();
    protected:
        string nom;
        bool initialise;
        Type type;
};

class Tableau : public Variable {
    public:
        Tableau(string n, Type t, int ta);
        Tableau(string n, Type t, int ta, list <int> * v);
        Tableau(string n, Type t, int ta, list <char> * v);
        int getTaille();
        list <int> * getTabEntiers();
        list <char> * getTabCaracteres();
        void affiche();
      private:
        int taille;
        list <int> * tabEntiers;
        list <char> * tabCaracteres;
};

class VariableSimple : public Variable {
    public:
        VariableSimple(string n, Type t);
        VariableSimple(string n, Type t, int v);
        VariableSimple(string n, Type t, char v);
        int getValeurEntiere();
        char getValeurCaractere();
        void affiche();
      private:
        int valeurEntiere;
        char valeurCaractere;
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
