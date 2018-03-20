#ifndef Instruction_h
#define Instruction_h

#include <stdio.h>
#include <string>
#include <list>

using namespace std;

enum Symbole {ADD, MULT, MOINS, DIV, MOD, PAR, INFS, INF, SUPS, SUP, NON, EQUALB, DIFF, ANDB, ORB, AND, OR, POW, DECG, DECD, EQUAL, PPEXP, MMEXP, EXPPP, EXPMM, XOREQ, OREQ, ANDEQ, MODEQ, DIVEQ, MULTEQ, MOINSEQ, ADDEQ, INVERT, NEGATION, COMMA };
const string symbolesEtiquettes[] = {"+", "*", "-", "/", "%", "()", "<", "≤", ">", "≥", "!", "==", "!=", "&&", "||", "&", "|", "^",
                                    "<<", ">>", "=", "++", "--", "++", "--", "|=", "&=", "%=", "/=", "*=", "-=", "+=", "!", "!", ","};

enum Type {CHAR, INT32, INT64, VOID};
const string typeEtiquettes[] =  { "char", "int32_t", "int64_t", "void" };

class Expression;

class Instruction {
    public:
        Instruction();
        virtual void affiche() = 0;
};


class Break : public Instruction {
    public:
        Break();
        void affiche();
};

class Return : public Instruction {
    public:
        Return(Expression * e);
        void affiche();
    private:
        Expression * expression;
};

class Bloc : public Instruction {
    public:
        Bloc();
        Bloc(list<Instruction*> * i);
        list <Instruction*> * getInstructions();
        void affiche();
      private:
        list <Instruction*> * instructions;
};

class Expression : public Instruction {
    public:
        Expression();
        virtual void affiche() = 0;
};

class AppelDeFonction : public Expression {
    public:
        AppelDeFonction(string n, list<Expression*> * param);
        string getNom();
        void affiche();
        list <Expression*> * getParametres();
    private:
        string nom;
        list <Expression*> * parametres;
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
        Expression * expression; //TODO: c'est pas plutot une variable ?
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
        bool getInitialise();
    protected:
        string nom;
        bool initialise;
};

class Tableau : public Variable {
    public:
        Tableau(string n);
        Tableau(string n, Expression * c);
        Tableau(string n, list <Nombre*> * v);
        Tableau(string n, list <Caractere*> * v);
        list <Nombre*> * getTabNombres();
        list <Caractere*> * getTabCaracteres();
        void affiche();
      private:
        list <Nombre*> * tabNombres;
        list <Caractere*> * tabCaracteres;
        Expression * caseAccedee;
};

class VariableSimple : public Variable {
    public:
        VariableSimple(string n);
        VariableSimple(string n, Nombre * v);
        VariableSimple(string n, Caractere * v);
        Nombre * getNombre();
        Caractere * getCaractere();
        void affiche();
      private:
        Nombre * nombre;
        Caractere * caractere;
};

class Affectation : public Expression {
    public:
        Affectation(Variable * v, Expression * e);
        Variable * getLValue();
        void affiche();
        Expression * getExpression();
    private:
        Variable * lValue;
        Expression * expression;
};

class Structure : public Instruction {
    public:
        Structure();
        virtual void affiche() = 0;
    private:
};

class If : public Structure {
    public:
        If();
        If(Expression * e, Instruction * i);
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
        IfElse(Expression * e, Instruction * i, Instruction * iElse);
        Instruction * getInstructionElse();
        void affiche();
    private:
        Instruction * instructionElse;
};

class While : public Structure {
    public:
        While(Expression * e, Instruction * i);
        While();
        Expression * getCondition();
        Instruction * getInstruction();
        void affiche();
    private:
        Expression * condition;
        Instruction * instruction;
};

#endif
