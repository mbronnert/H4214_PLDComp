#ifndef Fonction_h
#define Fonction_h

#include <stdio.h>
#include <string>
#include <list>

#include "Parametre.h"
#include "Declaration.h"

using namespace std;


class Fonction {
    public:
        Fonction(Type t, string n, list <Parametre> * p, list <Declaration> * d, Bloc * b);
    private:
        Type typeRetour;
        string nom;
        list <Parametre> * parametres;
        list <Declaration> * declarations;
        Bloc * bloc;
};



#endif /* Fonction_h */
