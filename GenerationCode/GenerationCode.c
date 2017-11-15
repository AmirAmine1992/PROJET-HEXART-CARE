#include <stdio.h>
#include <stdlib.h>

#include "GenerationCode.h"

void generation_ParamH(int parametreAffichage, int nbLedsAllumees, int ledAllumee)
{
	FILE *fichier = NULL;

	fichier = fopen("C:\\param.h", "w");

	switch (parametreAffichage)
	{
	case 1:
		fprintf(fichier, "int parametreAffichage = %d;\n", parametreAffichage);
		break;
	case 2:
		fprintf(fichier, "int parametreAffichage = %d, nbLedsAllumees = %d;\n", parametreAffichage, nbLedsAllumees);
		break;
	case 3:
		fprintf(fichier, "int parametreAffichage = %d, ledAllumee = %d;\n", parametreAffichage, ledAllumee);
		break;
	case 4:
		fprintf(fichier, "int parametreAffichage = %d, nbLedsAllumees = %d;\n", parametreAffichage, nbLedsAllumees);
		break;
	}
}
