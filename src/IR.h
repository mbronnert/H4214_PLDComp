#ifndef IR_H
#define IR_H

#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>
#include <map>

// Declarations from the parser -- replace with your own
#include "Type.h"
//#include "symbole.h"
#include "Fonction.h"
class BasicBlock;
class CFG;

using namespace std;

/*
 * Code assembleur:
 * jle = jump si less or equal
 * jne = jump si not equal
 * je= jump si equal
 * jge = jump si plus grand ou equal
 * jmp saut non conditionnel
 * Noms des registres:
 * %rbp et %rsp sont les base et stack pointeurs (définissent l'espace mémoire d'une fonction)
 * %rax est la return value (utilisée aussi pour toute opération intermédiaire)
 * %rdi, %rsi, %rdx, %rcx, %r8 et %r9 sont les paramètres de fonction
 * */
const string registreEtiquette[]= {
    "%rdi", 
    "%rsi", 
    "%rdx", 
    "%rcx",
    "%r8",
    "%r9"
  };

const string opEtiquette[]= {
    "ldconst",
    "add",
    "sub",
    "mul",
    "rmem",   //read mem
    "wmem",	//write mem
    "call",
    "cmp_eq", //compare equal
    "cmp_lt", //compare less than
    "cmp_le", //compare less or equal
    "cmp_gt", //compare greater than
    "cmp_ge", //compare greater or equal
    "cmp_diff", //compare diff
    "jmp", //saut
    "ret",
    "copy"
  };

class IRInstr {

   public:
  /** The instructions themselves -- feel free to subclass instead */
  typedef enum {
    ldconst,
    add,
    sub,
    mul,
    rmem,   //read mem
    wmem,	//write mem
    call,
    cmp_eq, //compare equal   ATTENTION, SI AJOUT D'OPERATION METTEZ APRES LES CMP SVP
    cmp_lt, //compare less than
    cmp_le, //compare less or equal
    cmp_gt, //compare greater than
    cmp_ge, //compare greater or equal
    cmp_diff, //compare diff
    jmp,
    ret,
    copy
  } Operation;

  IRInstr(BasicBlock* bb_, Operation o, Type type, vector<string> p);
  ~IRInstr();
  int getOperation();

  /** Actual code generation */
  void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */

 private:
  BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
  Operation op;
  Type t;
  vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
  // if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design.
};

/**  The class for a basic block */

/* A few important comments.
   IRInstr has no jump instructions:
   assembly jumps are generated as follows in BasicBlock::gen_asm():
     1/ a cmp_* comparison instructions, if it is the last instruction of its block,
       generates an actual assembly comparison followed by a conditional jump to the exit_false branch
       If it is not the last instruction of its block, it behaves as an arithmetic two-operand instruction (add or mult)
     2/ BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then
        if  exit_true  is a  nullptr, it generates the epilogue
        if  exit_false is not a nullptr, and the last instruction is not a cmp, it generates two conditional branches based on the value of the last variable assigned
        otherwise it generates an unconditional jmp to the exit_true branch
*/

class BasicBlock {
 public:
  BasicBlock(CFG* cfg, string entry_label);
  void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */

  void add_IRInstr(IRInstr::Operation op, Type t, vector<string> params);

  // No encapsulation whatsoever here. Feel free to do better.
  BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */
  BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
  string label; /**< label of the BB, also will be the label in the generated code */
  CFG* cfg; /** < the CFG where this block belongs */
  vector<IRInstr*> instrs; /** < the instructions themselves. */
 protected:


};




/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
   The entry block is the one with the same label as the AST function name.
     (it could be the first of bbs, or it could be defined by an attribute value)
   The exit block is the one with both exit pointers equal to nullptr.
     (again it could be identified in a more explicit way)

 */
class CFG {
 public:
  CFG(Fonction* ast);
  ~CFG();

  Fonction* ast; /**< The AST this CFG comes from */

  void add_bb(BasicBlock* bb);
  void add_parametre(string p);

  // x86 code generation: could be encapsulated in a processor class in a retargetable compiler
  void gen_asm(ostream& o);
  string IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
  void gen_asm_prologue(ostream& o);
  void gen_asm_epilogue(ostream& o);

  // symbol table methods
  void add_to_symbol_table(string name, Type t);
  string create_new_tempvar(Type t);
  int get_var_index(string name);
  Type get_var_type(string name);
  map<string, int> * getSymbole();
  vector<string> get_Parametres();

  // basic block management
  string new_BB_name();
  BasicBlock* currentBB;

 protected:
  map <string, Type> SymbolType; /**< part of the symbol table  */
  map <string, int> SymbolIndex; /**< part of the symbol table  */
  int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
  int nextBBnumber; /**< just for naming */
  int nextTempvar;
  vector<string> parametres;

  vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
};


#endif
