#ifndef Programme_h
#define Programme_h

#include <stdio.h>
#include <string>
#include <list>
#include <map>

#include "Declaration.h"
#include "Fonction.h"

using namespace std;


class Programme {
    public:
        Programme();
        Programme(list <Declaration*> * d, list <Fonction*> * f);
        bool verStatiqueDec();
        void affiche();
        list <Declaration*> * getDeclarations();
        list <Fonction*> * getFonctions();
        
        map<string, Fonction*> getFonctionsMap();
        map<string, Declaration*> getVariablesMap();
        void resolutionPortee();
        
    private:
	    list <Declaration*> * declarations;
	    list <Fonction*> * fonctions;
	    map<string, Declaration*> mapVariable;
	    map<string, Fonction*> mapFonction;
};



#endif
