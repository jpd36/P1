// Jonathan Pham
// CS4280 compilers
// P1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "testScanner.h"

int main(int argc, char *argv[]) {
	if (argc > 2) {
		printf("Error: Expected 1 or no arguments\n");
		return 1;
	}

    FILE *inFilePtr = NULL;
    char *fileName = NULL;

    if (argc == 2) {
        const char fileExt[] = ".input1";

        fileName = (char *) malloc(sizeof(argv[1]));
        strcpy(fileName, argv[1]);

        char inFile[strlen(fileName) + strlen(fileExt)];
        strcpy(inFile, fileName);
        strcat(inFile, fileExt);

		inFilePtr = fopen(inFile, "r");

		if (!inFilePtr) {
			printf("Error: File %s could not be opened\n", inFile);
			return ( 1 );
		}
	}
	else {
		inFilePtr = stdin;
	}
    testScanner(inFilePtr);
    fclose(inFilePtr);
	free(fileName);
	return ( 0 );
}
