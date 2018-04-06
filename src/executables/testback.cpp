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

string backEndTestUrl = "./Tests/BackEndTests/";

vector<string> backEndFiles = {
    backEndTestUrl + "1_decls",
    backEndTestUrl + "1_empty",
    backEndTestUrl + "2_putchar",
    backEndTestUrl + "3_variables",
    backEndTestUrl + "4-VarConstAddCall",
    backEndTestUrl + "5-IfThenElse",
    backEndTestUrl + "6-While",
    backEndTestUrl + "7-testWhileAndVariables",
    backEndTestUrl + "8-Return",
    backEndTestUrl + "9-lvalueGenerale",
    backEndTestUrl + "10-appel6Argument",
    backEndTestUrl + "11-checkPriority",
    backEndTestUrl + "12-testParenthese",
    backEndTestUrl + "13-factorielleRecursive"
};

void backEndTests() {
    cout << endl << "\033[1;32m[ BACK END TESTS ]\033[0m\n" << endl;
    for (int i=0 ; i<backEndFiles.size() ; i++) {
        cout << "\033[4;36mFichier :" << backEndFiles[i] << "\033[0m\n";

        ifstream file(backEndFiles[i] + ".c");
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        ANTLRInputStream input (content);
        PLDCOMPLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCOMPParser parser (&token);
        tree::ParseTree * tree = parser.programme();
        ConstructionIR constr;

        Visitor visitor;
        Programme * prog = (Programme *) visitor.visit(tree);
        // prog->resolutionPortee();

        constr.analyseProgramme(prog, backEndFiles[i]);

        cout << endl;

    }
}

int main () {
    backEndTests();
    return 0;
}
