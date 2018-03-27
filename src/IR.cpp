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
	string chaine;
	chaine = label +":";
	o<< chaine << endl;
	for(std::vector<IRInstr>::iterator it = instrs.begin() ; it != instrs.end(); ++it){
		it.gen_asm(o);
		if(it==instrs.end()){
			if(exit_true == nullptr){
				return;
			}
			if(exit_false != nullptr){
				//jouer sur les flags en fonction du type de comparaison
				chaine = "" + exit_true.label;
				o << chaine << endl;
				chaine = "" + exit_false.label;
				o << chaine << endl;
			}
		}
	}
}


/* Control Flow Graph */
CFG::CFG(DefFonction *ast) {

}

CFG::~CFG() {

}

void CFG::add_bb(BasicBlock *bb) {

}

void CFG::gen_asm(ostream& o) {
	for (std::vector<BasicBlock>::iterator it = bbs.begin() ; it != bbs.end(); ++it){
		it.gen_asm(o);
	}
}

string CFG::IR_reg_to_asm(string reg) {
	//string chaine = NomFonction; 
	//assignation tailles variables
}

void CFG::gen_asm_prologue(ostream& o) {

}

void CFG::gen_asm_epilogue(ostream& o) {
	string chaine = "leave";
	o << chaine << endl;
	chaine = "ret";
	o << chaine << endl;
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
  
}




