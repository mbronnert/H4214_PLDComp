#ifndef Declaration_h
#define Declaration_h

#include "Instruction.h"
#include "Type.h"

using namespace std;

class Variable;

class Declaration {
    public:
        Declaration();
        Declaration(Type t, Variable * v);
        Type getType();
        Variable * getVariable();
        void setNomVariable(string nom);

        //Ajouter une fonction qui vérifie si le nom passé en paramètre est identique
        //à celui de la variable et si elle est affectée.
        void affiche();
    protected:
        Type type;
        Variable * variable;
};

class DeclarationTableau : public Declaration {
    public:
        DeclarationTableau(Type t, Variable * v, int ta);
    private:
        int taille;
};

#endif
