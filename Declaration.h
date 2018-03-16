#ifndef Declaration_h
#define Declaration_h

#include <stdio.h>
#include <string>

using namespace std;

enum Type {CHAR, INT32, INT64, VOID};

class Declaration {
public:
    Declaration(Type t, string n);
    Type getType();
    string getNom();
private:
    Type type;
    string nom;
};

#endif
