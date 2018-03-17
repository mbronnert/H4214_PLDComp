#include "Visitor.h"
#include "antlr4-runtime.h"
#include <iostream>
#include "PLDCOMPLexer.h"
#include "PLDCOMPParser.h"
#include "PLDCOMPBaseVisitor.h"

#include "Programme.h"

using namespace antlr4;
using namespace std;

int main () {
    ANTLRInputStream input ("int_32 test[3]={2, 5, 1};\r\nint main() {char ok;}");
    PLDCOMPLexer lexer (&input);

    CommonTokenStream token (&lexer);

    PLDCOMPParser parser (&token);
    tree::ParseTree * tree = parser.programme();
    Visitor visitor;

    int resultat = (int) visitor.visit(tree);

    cout << resultat;


    return 0;
}
