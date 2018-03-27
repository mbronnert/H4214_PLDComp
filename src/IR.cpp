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


/* Control Flow Graph */
CFG::CFG(DefFonction *ast) {

}

CFG::~CFG() {

}

void CFG::add_bb(BasicBlock *bb) {

}

void CFG::gen_asm(ostream& o) {

}

string IR_reg_to_asm(string reg) {

}

void gen_asm_prologue(ostream& o) {

}

void gen_asm_epilogue(ostream& o) {

}

void add_to_symbol_table(string name, Type t) {

}

string create_new_tempvar(Type t) {

}

int get_var_index(string name) {

}

Type get_var_type(string name) {

}

string new_BB_name() {
  
}




