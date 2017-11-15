#include <stdio.h>
#include <stdlib.h>

#include "actions.h"

void collecteDonnees(Battements *b){
    FILE* fichier = NULL;
    int i=0;
    long indice;

    fichier = fopen("Battements.csv", "r+");
    fseek(fichier, 0L, SEEK_END);
    indice = ftell(fichier);
    fseek(fichier, 0L, SEEK_SET);
    if ( fichier != NULL){
        while(ftell(fichier)!= indice){
            fscanf(fichier, "%d;%d",&b[i].temps, &b[i].bpm);
            printf("%d;%d\n", b[i].temps, b[i].bpm);
            i++;
        }
        fclose(fichier);
    }
}
