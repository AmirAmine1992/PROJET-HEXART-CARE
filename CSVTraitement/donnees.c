#include <stdio.h>
#include <stdlib.h>

#include "actions.h"

int collecteDonnees(Battements *b, Battements *bp){

    //Déclarations

    FILE* fichier = NULL;
    int i, nombreLignes = 0;
    long indice;

    fichier = fopen("Battements.csv", "r+");

    fseek(fichier, 0, SEEK_END); //On determine l'indice du dernier caractère du fichier
    indice = ftell(fichier);
    fseek(fichier, 0, SEEK_SET);

    if ( fichier != NULL){

        while(ftell(fichier)!= indice){ // Tant qu'on est pas arrivés au dernier élément
            fscanf(fichier, "%d;%d",&b[nombreLignes].temps, &b[nombreLignes].bpm);  // On remplit le tableau "tab" de la structure personne
            nombreLignes++;
        }
        for(i=0; i<nombreLignes; i++){
            bp[i].temps=b[i].temps;
            bp[i].bpm=b[i].bpm;              //On copie le contenu du tableau "tab" dans le tableau "tabpouls"
        }
        fclose(fichier);

    }

    return nombreLignes;
}
