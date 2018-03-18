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
	cout << "-> Declaration { type :" << type << ", variable : " << variable << " }" << endl;
}
