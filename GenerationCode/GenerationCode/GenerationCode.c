#include <stdio.h>
#include <stdlib.h>

#include "GenerationCode.h"

void generation_ParamH(int parametreAffichage, int n)
{
	FILE *fichier = NULL;

	fichier = fopen("../param.h", "w"); //On g�nere un fichier param.h a cot� des fichiers arduino

	fprintf(fichier, "int paramAllu = %d, n = %d;\n", parametreAffichage, n); //On �crit les deux d�clarations dans le fichier param.h
}
