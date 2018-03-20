#ifndef Parametre_h
#define Parametre_h

#include <stdio.h>
#include <string>
#include <list>

#include "Instruction.h"

using namespace std;


class Parametre {
public:
    Parametre(Type t, string n);
    Type getType();
    string getNom();
    void affiche();
private:
    Type type;
    string nom;
};

#endif
