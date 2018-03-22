//
//  Fonction.cpp
//
//
//  Created by Mathilde Bronnert on 13/03/2018.
//

#include "Fonction.h"
#include <iostream>
#include <list>


Fonction::Fonction(Type t, string n, list <Parametre*> * p, list <Declaration*> * d, Bloc * b) {
    typeRetour = t;
    nom = n;
    parametres = p;
    declarations = d;
    bloc = b;
}

void Fonction::affiche() {
    cout << "declarationFonction : ";
    cout << typeEtiquettes[typeRetour] << " " << nom << "(";

    //if(!parametres->empty()){
    for(auto i = parametres->begin(); i != parametres->end(); i++) {
        (*i)->affiche();
        cout <<", ";
    }
    cout << ") {" << endl;
    //}
    //if(!declarations->empty()){
    for(auto i = declarations->begin(); i != declarations->end(); i++) {
        (*i)->affiche();
    }
    //}
    bloc->affiche();
    cout << endl << "}" << endl;
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


void Fonction::resolutionPortee(int *contextGlobal, list<string> *pileVariable, map<string, Declaration*> *mapVariable, list<string> *pileFonction) {
      
    int contextLocal = ++(*contextGlobal);
    int nivPile = 0;
    
    list<Declaration*>::iterator it = declarations->begin() ;
    while ( it != declarations->end() ) {

        string nomVariable = to_string(contextLocal)+"_"+(*it)->getVariable()->getNom();
        (*it)->setNomVariable(nomVariable);
        mapVariable->insert( pair<string,Declaration*>(nomVariable,(*it)) );
        pileVariable->push_back(nomVariable);
        nivPile++;
        
        it++;
    }
        
    bloc->resolutionPortee(contextGlobal, pileVariable, mapVariable, pileFonction);
        
    while(nivPile > 0) {
        pileVariable->pop_back();
        nivPile--;
    }
    
}
