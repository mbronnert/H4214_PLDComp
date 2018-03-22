#ifndef Fonction_h
#define Fonction_h

#include <stdio.h>
#include <string>
#include <list>
#include "Type.h"
#include "Parametre.h"
#include "Declaration.h"

using namespace std;

class Declaration;
class Parametre;
class Bloc;
class Fonction {
    public:
        Fonction(Type t, string n, list <Parametre*> * p, list <Declaration*> * d, Bloc * b);
        void affiche();
        Type getTypeRetour();
        string getNom();
        list<Parametre*> * getParametres();
        list<Declaration*> * getDeclarations();
        Bloc * getBloc();
        void resolutionPortee(int *contextGlobal, list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction);
    private:
        Type typeRetour;
        string nom;
        list <Parametre*> * parametres;
        list <Declaration*> * declarations;
        Bloc * bloc;
};



#endif /* Fonction_h */
