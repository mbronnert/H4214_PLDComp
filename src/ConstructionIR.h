#if ! defined ( ConstructionIR_H )
#define ConstructionIR_H

#include <list>
#include <iostream>

#include "Programme.h"
#include "Declaration.h"
#include "Fonction.h"
#include "Instruction.h"
#include "Parametre.h"
#include "IR.h"

using namespace std;

class ConstructionIR {
public:
    ConstructionIR();
    ConstructionIR(list <CFG*> * l, BasicBlock * b);
    ~ConstructionIR();
    void startASM(string fileName);

    void analyseProgramme(Programme * programme, string fileName);
    void analyseFonction(Fonction * fonction);
    void analyseBloc(Bloc * bloc);
    void analyseDeclaration(Declaration * declaration);
    void analyseInstruction(Instruction * instruction);
    void analyseExpression(Expression * expression);
    string analyseExprBin(ExprBin * expression);
    string analyseExprUnaire(ExprUnaire * expression);
    void analyseAffectation(Affectation * affectation);
    string analyseAppelDeFonction(AppelDeFonction * appelDeFonction);
    void analyseParametre(Parametre * parametre);
    void analyseReturn(Return * retour);
    void analyseIf(If * i);
    void analyseIfElse(IfElse * i);
    void analyseWhile(While * w);

    string expressionToIR(Expression * expression);

private:
    list <CFG*> * listeCFG;
    CFG * currentCFG;
};

#endif
