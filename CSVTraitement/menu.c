#include <stdio.h>
#include <stdlib.h>


#include "actions.h"

void menu(Battements *b, Battements *bp, int nombreLignes){

    int i, choix, temps, min, max, tmp;
    while(1){
    printf( "1 - Afficher les donnees dans l'ordre du fichier .csv \n"
            "2 - Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls) \n"
            "3 - Rechercher et afficher les donnees pour un temps particulier. \n"
            "4 - Afficher la moyenne de pouls dans une plage de temps donnee. \n"
            "5 - Afficher le nombre de lignes de donnees actuellement en memoire. \n"
            "6 - Rechercher et afficher les max/min de pouls. \n\n");

    scanf("%d", &choix);

    switch(choix){
        case 1:
            printf("Le fichier csv:");
            a_EnOrdre(b, nombreLignes);
            break;
        case 2:


            break;
        case 3:
            printf("\nVeuillez entrer le nombre de millisecondes\n ");
            scanf("%d", &temps);
            r_temps(b, temps, nombreLignes);
            break;
        case 5:
            printf("\nLe nombre de lignes du fichier est : %d\n\n", nombreLignes-1);
            break;
        case 4:
            printf("\nVeuillez entrer une plage de temps :\n");
            printf("Premier temps: ");
            scanf("%d", &min);
            printf("Deuxieme temps: ");
            scanf("%d", &max);
            if(min>max){
                    max = tmp;
                    max = min;
                    min = tmp;
                }
            r_moyenne(b, min, max, nombreLignes);
            break;
        case 6:
            printf("\n Veuillez selectionner :\n");
            printf("\n 1 - Recherche de la frequence minimale:\n");
            printf("\n 2 - Recherche de la frequence maximale:\n");
            scanf("%d", &max);
            r_maxMin(b, max, nombreLignes);
            break;
        }
    }
}
