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
    ANTLRInputStream input ("char test; void main(){ char a;}");
    PLDCOMPLexer lexer (&input);

    CommonTokenStream token (&lexer);

    PLDCOMPParser parser (&token);
    tree::ParseTree * tree = parser.programme();
    Visitor visitor;

    Programme * prog = (Programme *) visitor.visit(tree);

    prog->affiche();


    return 0;
}
