#include <stdio.h>
#include <stdlib.h>

#include "GenerationCode.h"

void generation_ParamH(int parametreAffichage, int n)
{
	FILE *fichier = NULL;

	fichier = fopen("../param.h", "w"); //On génere un fichier param.h a coté des fichiers arduino

	fprintf(fichier, "int paramAllu = %d, n = %d;\n", parametreAffichage, n); //On écrit les deux déclarations dans le fichier param.h
}
