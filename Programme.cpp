#include <iostream>
#include "Programme.h"

Programme::Programme() {
}

Programme::Programme(list <Declaration> * d, list <Fonction> * f) {
  declarations = d;
  fonctions = f;
}

void Programme::affiche() {
	cout << "Début Programme" << endl;

  for(auto i=declarations->begin();i!=declarations->end();i++) {
     i->affiche();
  }
  for(auto i=fonctions->begin();i!=fonctions->end();i++) {
     i->affiche();
  }
  cout << "Fin Programme" << endl;
}

list <Declaration> * Programme::getDeclarations() {
	return declarations;
}

list <Fonction> * Programme::getFonctions() {
	return fonctions;
}
