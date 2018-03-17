#ifndef Declaration_h
#define Declaration_h

#include "Instruction.h"

using namespace std;

class Declaration {
public:
    Declaration(Type t, Variable * v);
    Type getType();
    Variable * getVariable();
private:
    Type type;
    Variable * variable;
};

#endif
