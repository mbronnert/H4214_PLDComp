#ifndef Programme_h
#define Programme_h

#include <stdio.h>
#include <string>
#include <list>

#include "Declaration.h"
#include "Fonction.h"

using namespace std;


class Programme {
    public:
        Programme();
        Programme(list <Declaration*> * d, list <Fonction*> * f);
        void affiche();
        list <Declaration*> * getDeclarations();
        list <Fonction*> * getFonctions();
    private:
	    list <Declaration*> * declarations;
	    list <Fonction*> * fonctions;
};

#endif
