#include <stdio.h>

#include "../include/libfbl.h"

#define VERSION 0.1

void printLogo(void){
	fprintf(stdout, "===========================\n");
	fprintf(stdout, "- -- -- -- -- -- -- -- -- -\n");
	fprintf(stdout, "-       libfbl v%g       -\n", VERSION);
	fprintf(stdout, "- -- -- -- -- -- -- -- -- -\n");
	fprintf(stdout, "===========================\n");
}
