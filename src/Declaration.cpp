#include <iostream>
#include "Declaration.h"


Declaration::Declaration(Type t, Variable * v) {
    type = t;
    variable = v;
}

Type Declaration::getType(){
	return type;
}

Variable * Declaration::getVariable(){
	return variable;
}

void Declaration::affiche() {
	cout << "declaration : ";
	cout << typeEtiquettes[type] << " ";
    variable->affiche();
    cout << ";"<< endl;
}

DeclarationTableau::DeclarationTableau (Type t, Variable * v, int ta) : Declaration(t,v) {
    taille = ta;
}
