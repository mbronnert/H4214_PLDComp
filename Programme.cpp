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
	// TODO
	cout << "Fin Programme" << endl;
}

list <Declaration> * Programme::getDeclarations() {
	return declarations;
}

list <Fonction> * Programme::getFonctions() {
	return fonctions;
}
