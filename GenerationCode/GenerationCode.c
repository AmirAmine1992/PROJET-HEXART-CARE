#include <stdio.h>
#include <stdlib.h>

#include "GenerationCode.h"

void generation_ParamH(int parametreAffichage, int n)
{
	FILE *fichier = NULL;

	fichier = fopen("C:\\param.h", "w");

	fprintf(fichier, "int parametreAffichage = %d, n = %d;\n", parametreAffichage, n);
}
