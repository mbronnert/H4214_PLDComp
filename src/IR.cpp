#include "IR.h"

using namespace std;

/* IRInstr */
IRInstr::IRInstr(BasicBlock *bb_, Operation op, Type t, vector <string> params) {
	bb = bb_;
	op = op;
	t = t;
	params = params;
}

IRInstr::~IRInstr() {

}

void IRInstr::gen_asm(ostream &o) {
	string chaine;
	//switch()
}


/* BasicBlock */
BasicBlock::BasicBlock(CFG* cfg, string entry_label) {
	cfg = cfg;
	label = entry_label;
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
	instrs.push_back(new IRInstr(this, op, t, params));
}

void BasicBlock::gen_asm(ostream &o) {
	string chaine;
	chaine = label +":";
	o<< chaine << endl;
	for(std::vector<IRInstr>::iterator it = instrs.begin() ; it != instrs.end(); ++it){
		it.gen_asm(o);
		if(it==instrs.end()){
			if(exit_true == nullptr){
				return;
			}
			/*if(exit_false != nullptr){
				//jouer sur les flags en fonction du type de comparaison
				chaine = "" + exit_true.label;
				o << chaine << endl;
				chaine = "" + exit_false.label;
				o << chaine << endl;
			}*/
		}
	}
}


/* Control Flow Graph */
CFG::CFG(Fonction * ast) {
	ast = ast;
	nextBBnumber = 1;
	nextFreeSymbolIndex = 0;
	nextTempvar = 0;
}

CFG::~CFG() {

}

void CFG::add_bb(BasicBlock *bb) {
	bbs.push_back(bb);
}


void CFG::gen_asm(ostream& o) {
	for (vector<BasicBlock*>::iterator it = bbs.begin() ; it != bbs.end(); ++it)
	{
		(*it)->gen_asm(o);
	}
}

string CFG::IR_reg_to_asm(string reg) {
	//string chaine = NomFonction;
	//assignation tailles variables
}

//On push le base pointeur et on adapte le stack pointeur à la taille des variables
void CFG::gen_asm_prologue(ostream& o) {
	string chaine = "_" + ast->getNom() + ":";
	o<< chaine << endl;
	chaine = "pushq %rbp";
	o<< chaine << endl;
	chaine = "movq	%rsp, %rbp";
	o<< chaine << endl;
	int tailleMax = 8*(SymbolIndex.size()+1);
	chaine = "subq $"+to_string(tailleMax)+", %rsp";
	o<< chaine << endl;
}

//On remet le base pointeur et le stack pointeur au niveau de la fonction d'avant
void CFG::gen_asm_epilogue(ostream& o) {
	string chaine = "leave";
	o << chaine << endl;
	chaine = "ret";
	o << chaine << endl;
}

void CFG::add_to_symbol_table(string name, Type t) {
	SymbolType.insert(make_pair(name, t));
	SymbolIndex.insert(make_pair(name, nextFreeSymbolIndex));
	nextFreeSymbolIndex++;
}

string CFG::create_new_tempvar(Type t) {
	add_to_symbol_table("temp"+to_string(nextTempvar), t);
	return "temp"+to_string(nextTempvar++);
	//TODO : vérifier
}

int CFG::get_var_index(string name) {
	for (auto it = SymbolIndex.begin() ; it!=SymbolIndex.end() ; it++) {
		if (it->first == name) {
			return it->second;
		}
	}
	return -1;
}

Type CFG::get_var_type(string name) {
	for (auto it = SymbolType.begin() ; it!=SymbolType.end() ; it++) {
		if (it->first == name) {
			return it->second;
		}
	}
}

string CFG::new_BB_name() {
	return "B" + to_string(nextBBnumber++); // TODO : vérifier que c'est le bon nombre
}
