// Jonathan Pham
// CS4280 Compilers
// P1

#include <stdio.h>
#include "token.h"
#include "scanner.h"
#include "testScanner.h"

char *tokenNames[] = {
		"BEGINTk", "ENDTk", "LOOPTk", "VOIDTk", "INTTk", "RETURNTk", "READTk", "OUTPUTTk", "PROGRAMTk", "IFFTk", "THENTk", "LETTk", 



"EOFTk", "IDTk", "INTEGERTk", "EQTk", "LESSTk", "GREATERTk", "COLTk", "PLUSTk", "MINUSTk",
		"MULTTk", "DIVTk", "MODTk", "DOTTk", "LPARENTk", "RPARENTk", "COMMATk", "LEFTBRACETk",
		"RIGHTBRACETk", "SEMICOLTk", "LBRACKTk", "RBRACKTk"
};

void testScanner(FILE *inputFile) {
    token t;
    int endOfFile = 0;

    setLookaheadChar(inputFile);

    while (!endOfFile) {
        t = scanner(inputFile);
	if (t.type == EOFtk) {
            endOfFile = 1;
	}
	printToken(t);
    }
}
void printToken(token t) {
    printf("%s %s %d\n", tokenNames[t.type], t.instance, t.lineNum);
}
