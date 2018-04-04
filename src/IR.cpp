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

int IRInstr::getOperation(){
	return op;
}

void IRInstr::gen_asm(ostream &o) {
	string chaine;
	switch(op){
		case ldconst:
			chaine = "	movq	"+ to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)," + to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp)";
			break;

		case add:
			chaine = "	movq	"+ to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = "	addq	"+ to_string(this->bb->cfg->get_var_index(params[2]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = "	movq 	%rax, "+to_string(this->bb->cfg->get_var_index(params[0])) +"(%rbp)";
			o << chaine << endl;
			break;

		case sub:
			chaine = "	movq	"+ to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = 	"subq	"+ to_string(this->bb->cfg->get_var_index(params[2]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = "	movq 	%rax, "+to_string(this->bb->cfg->get_var_index(params[0])) +"(%rbp)";
			o << chaine << endl;
			break;

		case mul:
			chaine = "	movq	"+ to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = "	imulq	"+ to_string(this->bb->cfg->get_var_index(params[2]))+"(%rbp), %rax";
			o << chaine << endl;
			chaine = "	movq	%rax, "+to_string(this->bb->cfg->get_var_index(params[0])) +"(%rbp)";
			o << chaine << endl;
			break;

		case rmem:
			break;

		case wmem:
			break;

		case call:
		//TODO Faut-il récupérérer les paramètres dans le prologue de la fonction appelée?
			if(params.size()>8){
				cerr<<"Veuillez passer moins de 7 paramètres svp"<<endl;
			}
			if(params.size()>2){
				chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[2])) +"(%rbp), %rdi";
				o << chaine << endl;
				if(params.size()>3){
					chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[3])) +"(%rbp), %rsi";
					o << chaine << endl;
					if(params.size()>4){
						chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[4])) +"(%rbp), %rdx";
						o << chaine << endl;
						if(params.size()>5){
							chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[5])) +"(%rbp), %rcx";
							o << chaine << endl;
							if(params.size()>6){
								chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[6])) +"(%rbp), %r8";
								o << chaine << endl;
								if(params.size()>7){
									chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[7])) +"(%rbp), %r9";
									o << chaine << endl;
								}
							}
						}
					}
				}
			}
			chaine = "	call	"+to_string(this->bb->cfg->get_var_index(params[0]));
			o << chaine << endl;
			if(stoi(params[1])!=0){
				chaine = "	movq	%rax, "+to_string(this->bb->cfg->get_var_index(params[1])) +"(%rbp)";
				o << chaine << endl;
			}
			break;

		case cmp_eq:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case cmp_lt:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case cmp_le:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case cmp_gt:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case cmp_ge:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case cmp_diff:
			chaine = "	cmp		"+ to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), " + to_string(this->bb->cfg->get_var_index(params[1]))+"(%rbp)";
			o << chaine << endl;
			break;

		case ret:
		//TODO Gérer le cas où le param est en dur dans le code
			chaine = "	movq	"+to_string(this->bb->cfg->get_var_index(params[0]))+"(%rbp), %rax";
			o << chaine << endl;
			break;

		case copy:
			break;

	}
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
	for(vector<IRInstr*>::iterator it = instrs.begin() ; it != instrs.end(); ++it){
		(*it)->gen_asm(o);
		if(it==instrs.end()){
			if(exit_true != nullptr && exit_false != nullptr){
				if((*it)->getOperation()==8){
					chaine ="	jne	."+ exit_false->label;
				}else if((*it)->getOperation()==9){
					chaine ="	jge	."+ exit_false->label;
				}else if((*it)->getOperation()==10){
					chaine ="	jg	."+ exit_false->label;
				}else if((*it)->getOperation()==11){
					chaine ="	jle	."+ exit_false->label;
				}else if((*it)->getOperation()==12){
					chaine ="	jl	."+ exit_false->label;
				}
				else if((*it)->getOperation()==12){
					chaine ="	je	."+ exit_false->label;
				}
				o<<chaine<<endl;
			}
		}
	}
}


/* Control Flow Graph */
CFG::CFG(Fonction * ast) {
	this->ast = ast;
	nextBBnumber = 1;
	nextFreeSymbolIndex = -8;
	nextTempvar = 0;
}

CFG::~CFG() {

}

void CFG::add_bb(BasicBlock *bb) {
	bbs.push_back(bb);
}


void CFG::gen_asm(ostream& o) {
	gen_asm_prologue(o);
	for (vector<BasicBlock*>::iterator it = bbs.begin() ; it != bbs.end(); ++it)
	{
		(*it)->gen_asm(o);
	}
	gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg) {
	//string chaine = NomFonction;
	//assignation tailles variables
	return ""; // TODO: à virer, c'est juste pour les warning
}

//On push le base pointeur et on adapte le stack pointeur à la taille des variables
void CFG::gen_asm_prologue(ostream& o) {
	string chaine = "_" + ast->getNom() + ":";
	o<< chaine << endl;
	chaine = "	pushq	%rbp";
	o<< chaine << endl;
	chaine = "	movq	%rsp, %rbp";
	o<< chaine << endl;
	int tailleMax = 8*(SymbolIndex.size()+1);
	chaine = "	subq	$"+to_string(tailleMax)+", %rsp";
	o<< chaine << endl;
}

//On remet le base pointeur et le stack pointeur au niveau de la fonction d'avant
void CFG::gen_asm_epilogue(ostream& o) {
	string chaine = "	leave";
	o << chaine << endl;
	chaine = "	ret";
	o << chaine << endl;
}

void CFG::add_to_symbol_table(string name, Type t) {
	SymbolType.insert(make_pair(name, t));
	SymbolIndex.insert(make_pair(name, nextFreeSymbolIndex));
	nextFreeSymbolIndex = nextFreeSymbolIndex + 8;
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
