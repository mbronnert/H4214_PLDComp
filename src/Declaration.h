#ifndef Declaration_h
#define Declaration_h

#include "Instruction.h"

using namespace std;

class Declaration {
    public:
        Declaration();
        Declaration(Type t, Variable * v);
        Type getType();
        Variable * getVariable();
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
