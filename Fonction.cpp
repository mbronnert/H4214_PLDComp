//
//  Fonction.cpp
//
//
//  Created by Mathilde Bronnert on 13/03/2018.
//

#include "Fonction.h"
#include <iostream>
#include <list>

Fonction::Fonction(Type t, string n, list <Parametre> * p, list <Declaration> * d, Bloc * b) {
    typeRetour = t;
    nom = n;
    parametres = p;
    declarations = d;
    bloc = b;
}

void Fonction::affiche() {
    cout<< "-> Fonction { typeRetour :" << typeRetour << ", nom : " << nom << " }" << endl;
    if(!parametres->empty()){
        for(auto i = parametres->begin(); i != parametres->end(); ++i) {
            (i)->affiche();
        }
    }      
    if(!declarations->empty()){
        for(auto i = declarations->begin(); i != declarations->end(); ++i) {
            (i)->affiche();
        }
    }
    bloc->affiche();
}

Type Fonction::getTypeRetour() {
	return typeRetour;
}

string Fonction::getNom() {
	return nom;
}

list<Parametre> * Fonction::getParametres() {
	return parametres;
}

list<Declaration> * Fonction::getDeclarations() {
	return declarations;
}

Bloc * Fonction::getBloc() {
	return bloc;
}