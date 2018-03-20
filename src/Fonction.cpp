//
//  Fonction.cpp
//
//
//  Created by Mathilde Bronnert on 13/03/2018.
//

#include "Fonction.h"
#include <iostream>
#include <list>

const char* emType[] =  { "char", "int32_t", "int64_t", "void" };

Fonction::Fonction(Type t, string n, list <Parametre*> * p, list <Declaration*> * d, Bloc * b) {
    typeRetour = t;
    nom = n;
    parametres = p;
    declarations = d;
    bloc = b;
}

void Fonction::affiche() {
    cout << "declarationFonction" << endl;
    cout << emType[typeRetour] << " " << nom << endl;

    /*if(!parametres->empty()){
        cout << "(" << endl;
        for(auto i = parametres->begin(); i != parametres->end(); i++) {
            *i->affiche();
        }
        cout << ")" << endl;
    }else{
       cout << "()" << endl;
    }
    if(!declarations->empty()){
        for(auto i = declarations->begin(); i != declarations->end(); i++) {
            *i->affiche();
        }
    }
    bloc->affiche();*/
}

Type Fonction::getTypeRetour() {
	return typeRetour;
}

string Fonction::getNom() {
	return nom;
}

list<Parametre*> * Fonction::getParametres() {
	return parametres;
}

list<Declaration*> * Fonction::getDeclarations() {
	return declarations;
}

Bloc * Fonction::getBloc() {
	return bloc;
}
