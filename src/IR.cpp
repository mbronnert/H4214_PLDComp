#include "IR.h"

using namespace std;

/* IRInstr */
IRInstr::IRInstr(BasicBlock *bb_, Operation op, Type t, vector <string> params) {

}

IRInstr::~IRInstr() {

}

void IRInstr::gen_asm(ostream &o) {

}


/* BasicBlock */
BasicBlock::BasicBlock(CFG* cfg, string entry_label) {

}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){

}

void BasicBlock::gen_asm(ostream &o) {

}


/* Control Flow Graph */
CFG::CFG(Fonction *ast) {
	nextBBnumber = 1;
}

CFG::~CFG() {

}

void CFG::add_bb(BasicBlock *bb) {

}

void CFG::gen_asm(ostream& o) {
	for (vector<BasicBlock*>::iterator it = bbs.begin() ; it != bbs.end(); ++it)
	{
		(*it)->gen_asm(o);
	}
}

string CFG::IR_reg_to_asm(string reg) {

}

void CFG::gen_asm_prologue(ostream& o) {

}

void CFG::gen_asm_epilogue(ostream& o) {

}

void CFG::add_to_symbol_table(string name, Type t) {

}

string CFG::create_new_tempvar(Type t) {

}

int CFG::get_var_index(string name) {

}

Type CFG::get_var_type(string name) {

}

string CFG::new_BB_name() {
	return "B" + to_string(nextBBnumber++); // TODO : vérifier que c'est le bon nombre
}
