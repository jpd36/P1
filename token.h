// Jonathan Pham
// CS4280 Compilers
// P1

#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
	BEGINtk, ENDtk, LOOPtk, VOIDtk, INTtk, RETURNtk, READtk, OUTPUTtk, PROGRAMtk, IFFtk, THENtk, LETtk, // keywords

	EOFtk, IDtk, INTEGERtk, // identifiers, integers
	EQtk, LESStk, GREATERtk, COLtk, PLUStk, MINUStk, MULTtk, DIVtk, MODtk, DOTtk, LPARENtk, // relational operators
	RPARENtk, COMMAtk, LBRACEtk, RBRACEtk, SEMICOLtk, LBRACKtk, RBRACKtk, // and delimeters
} tokenType;

typedef struct {
	tokenType type;
	char instance[9]; 
	int lineNum;
} token;

#endif
