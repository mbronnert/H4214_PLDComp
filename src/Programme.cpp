#include <iostream>
#include "Programme.h"

Programme::Programme() {
}

Programme::Programme(list <Declaration*> * d, list <Fonction*> * f) {
  declarations = d;
  fonctions = f;
}

bool Programme::verStatiqueDec(){
    bool valide = true;
    bool valideInter = false;
    Declaration * dec;
    string nom;

    //Check des variables globales
    /*for(auto i=declarations.begin();i!=declarations.end();i++){
      valideInter = false;
      dec=*i;
      //modifier le getVariable (le bool va être dans la declaration)
      if(!dec.getVariable().getInitialise()){
        nom = dec.getVariable().getNom();
        //Check dans les autres variables globales
        for(auto j=i;j!=declarations.end()&&!valideInter;j++){
          //Check dans declarations
        }
        //Check dans les fonctions

        if(!valideInter){
          valide = false;
          break;
        }
      }
    }
    //Check des variables de fonction


    if(!valide){
      cerr<<"La variable "<< <<" n'est pas affectée ni utilisée."<<endl;
      return valide;
    }*/
    return valide;
}

void Programme::affiche() {
	cout << "---------- Start Program ----------" << endl;

     for(auto i=declarations->begin();i!=declarations->end();i++) {
        (*i)->affiche();
     }
     for(auto i=fonctions->begin();i!=fonctions->end();i++) {
        (*i)->affiche();
    }
     cout << "---------- End Program ----------" << endl;
}

list <Declaration*> * Programme::getDeclarations() {
	return declarations;
}

list <Fonction*> * Programme::getFonctions() {
	return fonctions;
}

void Programme::resolutionPortee() {
  
  list<string> pileVariable;
  list<string> pileFonction;
  
  int *contextGlobal = new int();
  int contextLocal = *contextGlobal;
  
  list<Fonction*>::iterator it;
  for(it=fonctions->begin(); it!=fonctions->end(); it++) {
      
      mapFonction.insert ( pair<string, Fonction*>((*it)->getNom(),(*it)) );
      pileFonction.push_back((*it)->getNom());
      (*it)->resolutionPortee(contextGlobal, &pileVariable, &mapVariable, &pileFonction);
      
  }
  
}
