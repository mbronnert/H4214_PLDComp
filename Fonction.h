//
//  Fonction.hpp
//  
//
//  Created by Mathilde Bronnert on 13/03/2018.
//

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
        Fonction(Type t, string n, list <Parametre> p);
    private:
        Type typeRetour;
        string nom;
        list <Parametre> parametres;
};



#endif /* Fonction_h */
