//
//  Fonction.cpp
//
//
//  Created by Mathilde Bronnert on 13/03/2018.
//

#include "Fonction.h"

Fonction::Fonction(Type t, string n, list <Parametre> * p, list <Declaration> * d, Bloc * b) {
    typeRetour = t;
    nom = n;
    parametres = p;
    declarations = d;
    bloc = b;
}
