#pragma once
#ifndef Instruction_h
#define Instruction_h

#include <stdio.h>
#include <string>
#include <list>
#include <map>
#include <iostream>

#include "Declaration.h"
#include "Fonction.h"
#include "Type.h"

using namespace std;

enum Symbole {ADD, MULT, MOINS, DIV, MOD, PAR, INFS, INF, SUPS, SUP, NON, EQUALB, DIFF, ANDB, ORB, AND, OR, POW, DECG, DECD, EQUAL, PPEXP, MMEXP, EXPPP, EXPMM, XOREQ, OREQ, ANDEQ, MODEQ, DIVEQ, MULTEQ, MOINSEQ, ADDEQ, INVERT, NEGATION, COMMA };

const string symbolesEtiquettes[] = {"+", "*", "-", "/", "%", "()", "<", "≤", ">", "≥", "!", "==", "!=", "&&", "||", "&", "|", "^",
                                    "<<", ">>", "=", "++", "--", "++", "--", "|=", "&=", "%=", "/=", "*=", "-=", "+=", "!", "!", ","};

const string typeEtiquettes[] =  { "char", "int32_t", "int64_t", "void" };

class Expression;

class Instruction {
    public:
        Instruction();
        ~Instruction() ;
        virtual void affiche() = 0;
};


class Break : public Instruction {
    public:
        Break();
        ~Break();
        void affiche();
};

class Return : public Instruction {
    public:
        Return(Expression * e);
        ~Return();
        void affiche();
    private:
        Expression * expression;
};

class Bloc : public Instruction {
    public:
        Bloc();
        ~Bloc();
        Bloc(list<Instruction*> * i);
        list <Instruction*> * getInstructions();
        void resolutionPortee(int *contextGlobal,list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
        void affiche();
      private:
        list <Instruction*> * instructions;
};

class Expression : public Instruction {
    public:
        Expression();
        ~Expression();
        virtual void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction)=0;
        virtual void affiche() = 0;
};

class AppelDeFonction : public Expression {
    public:
        AppelDeFonction(string n, list<Expression*> * param);
        ~AppelDeFonction();
        string getNom();
        void affiche();
        list <Expression*> * getParametres();
        void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    private:
        string nom;
        list <Expression*> * parametres;
};

class ExprBin : public Expression {
    public:
        ExprBin(Expression * g, Expression * d, Symbole s);
        ~ExprBin();
        void affiche();
        Expression * getGauche();
        Expression * getDroite();
        Symbole getSymbole();
        void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    private:
        Expression * gauche;
        Expression * droite;
        Symbole symbole;
};

class ExprUnaire : public Expression {
    public:
        ExprUnaire(Expression * e, Symbole s);
        ~ExprUnaire();
        void affiche();
        Expression * getExpression();
        Symbole getSymbole();
        void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    private:
        Expression * expression; //TODO: c'est pas plutot une variable ?
        Symbole symbole;
};

class Nombre : public Expression {
    public:
        Nombre();
	    ~Nombre();
        Nombre(int v);
        void affiche();
        int getValeur();
	    void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction){};
    private:
        int valeur;
};

class Caractere : public Expression {
    public:
        Caractere();
	    ~Caractere();
        Caractere(char v);
        void affiche();
        int getValeur();
	    void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction){};
    private:
        int valeur;
};

class Variable : public Expression {
    public:
        Variable();
		~Variable();
        Variable(string n);
        string getNom();
        void setNom(string nom);
        virtual void affiche() = 0;
        void setInitialise(bool i);
        bool getInitialise();
	    void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction){};
    protected:
        string nom;
        bool initialise;
};

class Tableau : public Variable {
    public:
        Tableau(string n);
        Tableau(string n, list <Nombre*> * v);
        Tableau(string n, list <Caractere*> * v);
        list <Nombre*> * getTabNombres();
        list <Caractere*> * getTabCaracteres();
        void affiche();
      private:
        list <Nombre*> * tabNombres;
        list <Caractere*> * tabCaracteres;
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

class AppelDeVariable : public Expression {
    public:
        AppelDeVariable();
        AppelDeVariable(string n);
        string getNom();
        void setNom(string nom);
        virtual void affiche() = 0;
        void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    protected:
        string nom;
        Type type;
};

class AppelDeTableau : public AppelDeVariable {
    public:
        AppelDeTableau(string n);
        AppelDeTableau(string n, Expression * c);
        list <Nombre*> * getTabNombres();
        list <Caractere*> * getTabCaracteres();
        void affiche();
      private:
        list <Nombre*> * tabNombres;
        list <Caractere*> * tabCaracteres;
        Expression * caseAccedee;
};

class AppelDeVariableSimple : public AppelDeVariable {
    public:
        AppelDeVariableSimple(string n);
        Nombre * getNombre();
        Caractere * getCaractere();
        void affiche();
      private:
        Nombre * nombre;
        Caractere * caractere;
};


class Affectation : public Expression {
    public:
        Affectation(AppelDeVariable * v, Expression * e);
        AppelDeVariable * getLValue();
        void affiche();
        Expression * getExpression();
		void resolutionPortee(list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    private:
        AppelDeVariable * lValue;
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
