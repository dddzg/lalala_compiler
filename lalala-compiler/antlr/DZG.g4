grammar DZG;

primaryExpression
    :   Identifier
    |   Constant
    |   StringLiteral+
    |   '(' expression ')'
    |   '(' compoundStatement ')'
    ;

Identifier
    :   IdentifierNondigit
        (   IdentifierNondigit
        |   Digit
        )*
    ;

identifierList
    :   Identifier
    |   identifierList ',' Identifier
    ;



fragment
IdentifierNondigit
    :   Nondigit
    //|   UniversalCharacterName  暂时去掉
    //|   // other implementation-defined characters...
    ;

fragment
Nondigit
    :   [a-zA-Z_]
    ;

fragment
Digit
    :   [0-9]
    ;



Constant
    :   IntegerConstant
    |   FloatingConstant
    //|   EnumerationConstant
    |   CharacterConstant
    ;


fragment
IntegerConstant
    :   DecimalConstant // IntegerSuffix? 这个后缀暂时取消
    //|   OctalConstant IntegerSuffix? 暂时只考虑十进制
    //|   HexadecimalConstant IntegerSuffix?
    //|	BinaryConstant
    ;

fragment
DecimalConstant
    :   NonzeroDigit Digit*
    ;

fragment
NonzeroDigit
    :   [1-9]
    ;

fragment
FloatingConstant
    :   DecimalFloatingConstant
    //|   HexadecimalFloatingConstant 暂时只考虑十进制浮点数
    ;

fragment
DecimalFloatingConstant
    :   FractionalConstant // ExponentPart? FloatingSuffix? 暂时取消
    //|   DigitSequence ExponentPart FloatingSuffix?
    ;

fragment
FractionalConstant
    :   DigitSequence? '.' DigitSequence
    |   DigitSequence '.'
    ;

DigitSequence
    :   Digit+
    ;

fragment
CharacterConstant
    :   '\'' CCharSequence '\''
    //|   'L\'' CCharSequence '\''
    //|   'u\'' CCharSequence '\''
    //|   'U\'' CCharSequence '\''
    ;

fragment
CCharSequence
    :   CChar+
    ;

fragment
CChar
    :   ~['\\\r\n]
    //|   EscapeSequence 不考虑
    ;

StringLiteral
    :   /*EncodingPrefix?*/ '"' SCharSequence? '"'
    ;

fragment
SCharSequence
    :   SChar+
    ;

fragment
SChar
    :   ~["\\\r\n]
    //|   EscapeSequence
    |   '\\\n'   // Added line
    |   '\\\r\n' // Added line
    ;

expression
    :   assignmentExpression
    |   expression ',' assignmentExpression
    ;

assignmentExpression
    :   conditionalExpression
    |   unaryExpression assignmentOperator assignmentExpression
    |   DigitSequence // for
    ;

conditionalExpression
    :   logicalOrExpression ('?' expression ':' conditionalExpression)?
    ;

logicalOrExpression
    :   logicalAndExpression
    |   logicalOrExpression '||' logicalAndExpression
    ;

logicalAndExpression
    :   inclusiveOrExpression
    |   logicalAndExpression '&&' inclusiveOrExpression
    ;

inclusiveOrExpression
    :   exclusiveOrExpression
    |   inclusiveOrExpression '|' exclusiveOrExpression
    ;

exclusiveOrExpression
    :   andExpression
    |   exclusiveOrExpression '^' andExpression
    ;

andExpression
    :   equalityExpression
    |   andExpression '&' equalityExpression
    ;

equalityExpression
    :   relationalExpression
    |   equalityExpression '==' relationalExpression
    |   equalityExpression '!=' relationalExpression
    ;

relationalExpression
    :   shiftExpression
    |   relationalExpression '<' shiftExpression
    |   relationalExpression '>' shiftExpression
    |   relationalExpression '<=' shiftExpression
    |   relationalExpression '>=' shiftExpression
    ;

shiftExpression
    :   additiveExpression
    |   shiftExpression '<<' additiveExpression
    |   shiftExpression '>>' additiveExpression
    ;

additiveExpression
    :   multiplicativeExpression
    |   additiveExpression '+' multiplicativeExpression
    |   additiveExpression '-' multiplicativeExpression
    ;

multiplicativeExpression
    :   castExpression
    |   multiplicativeExpression '*' castExpression
    |   multiplicativeExpression '/' castExpression
    |   multiplicativeExpression '%' castExpression
    ;

castExpression
    :   unaryExpression
    |   '(' typeName ')' castExpression
    //|   '__extension__' '(' typeName ')' castExpression
    |   DigitSequence // for
    ;

unaryExpression
    :   postfixExpression
    |   '++' unaryExpression
    |   '--' unaryExpression
    |   unaryOperator castExpression
    //|   'sizeof' unaryExpression
    //|   'sizeof' '(' typeName ')'
    //|   '_Alignof' '(' typeName ')'
    //|   '&&' Identifier // GCC extension address of label
    ;

postfixExpression
    :   primaryExpression
    |   postfixExpression '[' expression ']'
    |   postfixExpression '(' argumentExpressionList? ')'
    |   postfixExpression '.' Identifier
    //|   postfixExpression '->' Identifier 暂时不支持
    |   postfixExpression '++'
    |   postfixExpression '--'
    |   '(' typeName ')' '{' initializerList '}'
    |   '(' typeName ')' '{' initializerList ',' '}'
    //|   '__extension__' '(' typeName ')' '{' initializerList '}'
    //|   '__extension__' '(' typeName ')' '{' initializerList ',' '}'
    ;

argumentExpressionList
    :   assignmentExpression
    |   argumentExpressionList ',' assignmentExpression
    ;

unaryOperator
    :   '&' | '*' | '+' | '-' | '~' | '!'
    ;

typeName
    :   specifierQualifierList //abstractDeclarator?
    ;

specifierQualifierList
    :   typeSpecifier specifierQualifierList?
    |   typeQualifier specifierQualifierList?
    ;

typeSpecifier
    :   ('void'
    |   'char'
    |   'short'
    |   'int'
    |   'long'
    |   'float'
    |   'double'
    |   'signed')
    //|   'unsigned'
    //|   '_Bool'
    //|   '_Complex'
    //|   '__m128'
    //|   '__m128d'
    //|   '__m128i')
    //|   '__extension__' '(' ('__m128' | '__m128d' | '__m128i') ')'
    //|   atomicTypeSpecifier
    //|   structOrUnionSpecifier
    //|   enumSpecifier
    //|   typedefName
    //|   '__typeof__' '(' constantExpression ')' // GCC extension
    ;

typeQualifier
    :   'const'
    //|   'restrict'
    //|   'volatile'
    //|   '_Atomic'
    ;

initializerList
    :   designation? initializer
    |   initializerList ',' designation? initializer
    ;

designation
    :   designatorList '='
    ;

designatorList
    :   designator
    |   designatorList designator
    ;

designator
    :   '[' constantExpression ']'
    |   '.' Identifier
    ;

constantExpression
    :   conditionalExpression
    ;

initializer
    :   assignmentExpression
    |   '{' initializerList '}'
    |   '{' initializerList ',' '}'
    ;

assignmentOperator
    :   '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
    ;

compoundStatement
    :   '{' blockItemList? '}'
    ;

blockItemList
    :   blockItem
    |   blockItemList blockItem
    ;

blockItem
    :   declaration
    |   statement
    ;

declaration
    :   declarationSpecifiers initDeclaratorList ';'
	  // | 	declarationSpecifiers ';' 谜之？
    //|   staticAssertDeclaration
    ;

statement
    :   labeledStatement
    |   compoundStatement
    |   expressionStatement
    |   selectionStatement
    |   iterationStatement
    //|   jumpStatement
    //|   ('__asm' | '__asm__') ('volatile' | '__volatile__') '(' (logicalOrExpression (',' logicalOrExpression)*)? (':' (logicalOrExpression (',' logicalOrExpression)*)?)* ')' ';'
    ;

declarationSpecifiers
    :   declarationSpecifier+
    ;

declarationSpecifier
    :   storageClassSpecifier
    |   typeSpecifier
    |   typeQualifier
    //|   functionSpecifier inline
    //|   alignmentSpecifier
    ;

storageClassSpecifier
    :   'typedef'
    //|   'extern'
    |   'static'
    //|   '_Thread_local'
    //|   'auto'
    //|   'register'
    ;

initDeclaratorList
    :   initDeclarator
    |   initDeclaratorList ',' initDeclarator
    ;

initDeclarator
    :   declarator
    |   declarator '=' initializer
    ;

declarator
    :   /*pointer?*/ directDeclarator /*gccDeclaratorExtension**/
    ;

directDeclarator  // ??
    :   Identifier
    |   '(' declarator ')'
    |   directDeclarator '[' typeQualifierList? assignmentExpression? ']'
    //|   directDeclarator '[' typeQualifierList? '*' ']'
    //|   directDeclarator '(' parameterTypeList ')'
    |   directDeclarator '(' identifierList? ')'
    ;

typeQualifierList
    :   typeQualifier
    |   typeQualifierList typeQualifier
    ;

labeledStatement
    :   Identifier ':' statement
    |   'case' constantExpression ':' statement
    |   'default' ':' statement
    ;

expressionStatement
    :   expression? ';'
    ;

selectionStatement
    :   'if' '(' expression ')' statement ('else' statement)?
    |   'switch' '(' expression ')' statement
    ;

iterationStatement
    :   While '(' expression ')' statement
    |   Do statement While '(' expression ')' ';'
    |   For '(' forCondition ')' statement
    ;

While : 'while';

If : 'if';

Do : 'do';

For : 'for';

forCondition
	:   forDeclaration ';' forExpression? ';' forExpression?
	|   expression? ';' forExpression? ';' forExpression?
	;

forDeclaration
    :   declarationSpecifiers initDeclaratorList
	  | 	declarationSpecifiers
    ;

forExpression
    :   assignmentExpression
    |   forExpression ',' assignmentExpression
    ;

functionDefinition
    :   declarationSpecifiers? declarator declarationList? compoundStatement
    ;

declarationList
    :   declaration
    |   declarationList declaration
    ;

externalDeclaration
    :   functionDefinition
    |   declaration
    |   ';' // stray ;
    ;

translationUnit
    :   externalDeclaration
    |   translationUnit externalDeclaration
    ;

compilationUnit
    :   translationUnit? EOF
    ;



ComplexDefine
    :   '#' Whitespace? 'define'  ~[#]*
        -> skip
    ;
         
// ignore the following asm blocks:
/*
    asm
    {
        mfspr x, 286;
    }
 */
AsmBlock
    :   'asm' ~'{'* '{' ~'}'* '}'
	-> skip
    ;
	
// ignore the lines generated by c preprocessor                                   
// sample line : '#line 1 "/home/dm/files/dk1.h" 1'                           
LineAfterPreprocessing
    :   '#line' Whitespace* ~[\r\n]*
        -> skip
    ;  

LineDirective
    :   '#' Whitespace? DecimalConstant Whitespace? StringLiteral ~[\r\n]*
        -> skip
    ;

PragmaDirective
    :   '#' Whitespace? 'pragma' Whitespace ~[\r\n]*
        -> skip
    ;

Whitespace
    :   [ \t]+
        -> skip
    ;

Newline
    :   (   '\r' '\n'?
        |   '\n'
        )
        -> skip
    ;

BlockComment
    :   '/*' .*? '*/'
        -> skip
    ;

LineComment
    :   '//' ~[\r\n]*
        -> skip
    ;