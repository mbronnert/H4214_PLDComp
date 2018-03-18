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
    ANTLRInputStream input ("int_32 test[3]={2, 5, 1};\r\nint main() {char ok; 1+1;}");
    PLDCOMPLexer lexer (&input);

    CommonTokenStream token (&lexer);

    PLDCOMPParser parser (&token);
    tree::ParseTree * tree = parser.programme();
    Visitor visitor;

    Programme * prog = (Programme *) visitor.visit(tree);

    prog->affiche();


    return 0;
}
