#include "Declaration.h"

Declaration::Declaration(Type t, string n) {
    type = t;
    nom = n;
}

Type Declaration::getType(){
	return type;
}
string Declaration::getNom(){
	return nom;
}
