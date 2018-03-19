#include <iostream>
#include "Declaration.h"

const char* enType[] =  { "char", "int32_t", "int64_t", "void" };

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
	cout << "declarationVariables" << endl;
	cout << enType[type] << " " << getVariable()->getNom() << ";"<< endl;
}

DeclarationTableau::DeclarationTableau (Type t, Variable * v, int ta) : Declaration(t,v) {
    taille = ta;
}
