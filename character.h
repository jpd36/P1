// jonathan pham
// cs 4280 compilers
// p1 due 03/17/19

#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
        char value;
        int tableColNum;
        int lineNum;
} character;

typedef enum {
	LOWER, UPPER, INT, WS, EQ, LESS, GREATER, COL, PLUS, MINUS, MULT, DIV, MOD, DOT, LPAREN,
	RPAREN, COMMA, LBRACE, RBRACE, SEMICOL, LBRACK, RBRACK, ENDOFFILE, COMMENT
} characterType;


#endif
