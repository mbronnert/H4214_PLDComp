#ifndef Declaration_h
#define Declaration_h

#include "Instruction.h"

using namespace std;

class Declaration {
    public:
        Declaration();
        Declaration(Type t, Variable * v);
        Declaration(Type t, list<Variable *> * lv);
        Type getType();
        Variable * getVariable();
        list<Variable *> * getListVariable();
        void affiche();
    protected:
        Type type;
        Variable * variable;
        list<Variable *> * lvar;
};

class DeclarationTableau : public Declaration {
    public:
        DeclarationTableau(Type t, Variable * v, int ta);
    private:
        int taille;
};

#endif
