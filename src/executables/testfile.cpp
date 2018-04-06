#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "PLDCOMPLexer.h"
#include "PLDCOMPParser.h"
#include "PLDCOMPBaseVisitor.h"

#include "Visitor.h"
#include "Programme.h"
#include "ConstructionIR.h"

using namespace antlr4;
using namespace std;


void backEndTests(string filedir) {

    cout << "\033[4;36mFichier :" << filedir << "\033[0m\n";

    ifstream file(filedir + ".c");
    string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
    ANTLRInputStream input (content);
    PLDCOMPLexer lexer (&input);
    CommonTokenStream token (&lexer);
    PLDCOMPParser parser (&token);
    tree::ParseTree * tree = parser.programme();
    ConstructionIR constr;

    Visitor visitor;
    Programme * prog = (Programme *) visitor.visit(tree);
    prog->resolutionPortee();

    constr.analyseProgramme(prog, filedir);

    cout << endl;

}

int main () {
    
    string filedir;
    cout << "Please enter the location and name of your testing file (without extension) :" <<endl;
    cout << "\033[24;36m(Example of a file named 'testfile' located on the root : ./testfile)\033[0m\n" <<endl;
    cout << "File name&location : ";
    cin >> filedir;
    backEndTests(filedir);

    return 0;
}
