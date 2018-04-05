grammar PLDCOMP;

opPrioritaire : '*'   # mult
          | '/'   # div
          | '&&'  # andb
          ;

opSecondaire : '+'    # add
                | '-'   # moins
                | '||'  # orb
                | '%'   # mod
                | '^'   # pow
                | '&'   # and
                | '|'   # or
                | '='   # equal
                | '+='   # addeq
                | '-='   # moinseq
                | '*='   # multeq
                | '/='   # diveq
                | '%='   # modeq
                | '&='   # andeq
                | '|='   # oreq
                | '^='   # xoreq
                | '<'   # infs
                | '<='  # inf
                | '>'   # sups
                | '>='  # sup
                | '<<'  # decg
                | '>>'  # decd
                | '=='  # equalb
                | '!='  # diff
                | ','	# comma
                ;

exp : exp opSecondaire expPrioritaire # operateurBinaireSecondaire
            | expPrioritaire # expressionPrioritaire
            | '!' exp  # non
            | '-' exp  # negation
            | '~' exp  # invert
            | lvalue '++' # exppp
            | lvalue '--' # expmm
            | '++' lvalue # ppexp
            | '--' lvalue # mmexp
            | lvalue '=' exp # affectation
            | NOMBRE # constanteNombre
            | CHAR # constanteCaractere
            | lvalue # expLvalue
            | NOMVAR '(' exp (',' exp )* ')' # appelDeFonction
            | 'putchar' '(' exp ')' # appelPutchar
            | 'getchar' '(' ')' # appelGetchar
            ;

expPrioritaire : expPrioritaire opPrioritaire expParenthese # operateurBinairePrioritaire
                | expParenthese # expressionParenthese
                ;

expParenthese : '(' exp ')' # parenthese
                | NOMBRE # expressionNombre
                | CHAR # expressionCaractere
                | lvalue # expressionLvalue
                ;

lvalue : NOMVAR # variable
        | NOMVAR '[' exp ']' # tableau
        ;

structure : if_statement # ifStatement
            | while_statement # whileStatement
            ;

constante : NOMBRE # constanteNb
          | CHAR # constanteCar ;

type_variable : 'char' | 'int32_t' | 'int64_t' ;

type_function : 'char' | 'int32_t' | 'int64_t' | 'void' ;

if_statement : 'if' '(' exp ')' instruction #if
              | 'if' '(' exp ')' instruction 'else' instruction #ifElse
              ;

while_statement : 'while' '(' exp ')' instruction # while ;

val : NOMBRE ( ',' NOMBRE)* # tableauNombre
    | CHAR ( ',' CHAR)* # tableauCaractere ;

declaration_type :  entier declaration_int_generale (',' declaration_int_generale)* # declarationIntMult
				  | 'char' declaration_char_generale (',' declaration_char_generale)* # declarationCharMult
                  | type_variable NOMVAR '[' NOMBRE ']' # declarationTableau
                  | type_variable NOMVAR '[' NOMBRE ']' '=' '{' val '}' # declarationTableauConstante
                  ;

entier :  'int32_t' # int32
		| 'int64_t' # int64
		;

declaration_int_generale : NOMVAR # declarationIntSimple
					| NOMVAR '=' constante #declarationIntConstante
					;

declaration_char_generale : NOMVAR # declarationCharSimple
					| NOMVAR '=' constante #declarationCharConstante
					;



param : 'void' # void
        | type_variable NOMVAR (',' type_variable NOMVAR)* # parametres
        ;

fonction : type_function NOMVAR '(' param ')' '{'declaration_variables bloc '}' # declarationFonctionParams
           | type_function NOMVAR '(' ')' '{' declaration_variables bloc '}' # declarationFonction ;

declaration_variables : ( declaration_type ';' )* # declarationVariables ;

bloc : instruction* ;

instruction :  '{' bloc '}' # blocInstruction
               | 'break' ';' # breakInstruction
               | structure # structureInstruction
               | 'return' exp ';' # returnInstruction
               | exp ';' # expInstruction
               ;

programme : declaration_variables fonction* ;

NOMVAR : [a-zA-Z][a-zA-Z0-9]* ;
NOMBRE : [0-9]+ ;
CHAR : '\'' ((~'\'')|'\\'~'\'') '\'';
COMMENT: '/*' . *? '*/'-> skip ;
LINECOMMENT: '//' ~[\r\n]* -> skip;
WS : [ \t\r\n]+ -> skip ;
INCLUDE : '#' ~[\r\n]* -> skip;
