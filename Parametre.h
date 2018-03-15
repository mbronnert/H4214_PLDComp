#ifndef Parametre_h
#define Parametre_h

#include <stdio.h>
#include <string>
#include "Declaration.h"

using namespace std;


class Parametre {
public:
    Parametre(Type t, string n);
private:
    Type type;
    string nom;
};

#endif
