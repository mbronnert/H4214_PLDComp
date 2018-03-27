#include "ConstructionIR.h"

ConstructionIR::ConstructionIR(list <CFG*> * l, BasicBlock * b) {
    listeCFG = l;
    currentBB = b;
}

void ConstructionIR::analyseProgramme(Programme * programme) {
    // TODO : faire les déclarations

    for (auto it=programme->getFonctions()->begin() ; it != programme->getFonctions()->end() ; it++) {
        CFG * cfg = new CFG(*it);
        listeCFG->push_back(cfg);
        currentCFG = cfg;
        analyseFonction(*it);
    }
}


void ConstructionIR::analyseFonction(Fonction * fonction) {
    //TODO : paramètres et déclarations
    BasicBlock * prologue = new BasicBlock (currentCFG, fonction->getNom());
    currentCFG->add_bb(prologue);
    currentBB = prologue;
    analyseBloc(fonction->getBloc());

}

void ConstructionIR::analyseBloc(Bloc * bloc) {
    list <Instruction*> * instructions = bloc->getInstructions();

    for (auto it=instructions->begin() ; it!=instructions->end() ; it++) {
        //Type i = (*it)->getTypeNoeud();
    }
}
