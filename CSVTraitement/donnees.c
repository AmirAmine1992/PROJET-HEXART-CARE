#include <stdio.h>
#include <stdlib.h>

#include "actions.h"

void initialise(Patient *personne, Tmp *temp, int nombreLignes){

    int i;
    personne->tab = (Battements*)calloc(nombreLignes-1, sizeof(Battements));    //On alloue deux tableaux de la taille du nombre de lignes du fichier
    personne->tabPouls =(Battements*)calloc(nombreLignes-1, sizeof(Battements));

    for(i=0; i<nombreLignes-1; i++){
            personne->tab[i].temps=temp->tabTmp[i].temps;       //On copie le contenu du tableau "temp" dans le tableau "tab"
            personne->tab[i].bpm=temp->tabTmp[i].bpm;
            personne->tabPouls[i].temps=temp->tabTmp[i].temps;  //On copie le contenu du tableau "temp" dans le tableau "tabpouls"
            personne->tabPouls[i].bpm=temp->tabTmp[i].bpm;

        }
}


int collecteDonnees(Patient *personne){

    //Déclarations

    Tmp temp;

    FILE* fichier = NULL;
    int nombreLignes = 0;
    int indice;

    // Debut

    fichier = fopen("Battements.csv", "r");

    fseek(fichier, 0, SEEK_END); //On determine l'indice du dernier caractère du fichier
    indice = ftell(fichier);
    fseek(fichier, 0, SEEK_SET);

    if ( fichier != NULL){
        while(ftell(fichier)!= indice){ // Tant qu'on n'est pas arrivés au dernier élément
            fscanf(fichier, "%d;%d", &temp.tabTmp[nombreLignes].temps, &temp.tabTmp[nombreLignes].bpm); //On remplit le tableau "tab" de la structure personne
            nombreLignes++;
        }

        initialise(personne, &temp, nombreLignes);
        fclose(fichier);

    }
    else{
        printf("Le fichier n'existe pas.");
    }

    return nombreLignes;
}


