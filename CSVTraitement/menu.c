#include <stdio.h>
#include <stdlib.h>


#include "actions.h"

int menu(Battements *b, Battements *bp, int nombreLignes){

    int choix, temps, min, max, tmp, choixTri, ordre;
    while(1){
    printf( "***********************************************************************************************\n"
            "***1 - Afficher les donnees dans l'ordre du fichier .csv                                    *** \n"
            "***2 - Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls).*** \n"
            "***3 - Rechercher et afficher les donnees pour un temps particulier.                        *** \n"
            "***4 - Afficher la moyenne de pouls dans une plage de temps donnee.                         *** \n"
            "***5 - Afficher le nombre de lignes de donnees actuellement en memoire.                     *** \n"
            "***6 - Rechercher et afficher les max/min de pouls.                                         *** \n"
            "***0 - Quitter l'application.                                                               *** \n"
            "*********************************************************************************************** \n");

    scanf("%d", &choix);

    switch(choix){
        case 1:
            printf("\nLe fichier csv: \n\n");
            a_OrdreCrois(b, nombreLignes);
            break;
        case 2:
            printf("Voulez-vous afficher le tableau par rapport au: \n"
                   "1-Temps, 2-Pouls ?\n");
            scanf("%d", &choixTri);
            printf("Voulez-vous afficher le tableau en ordre: \n"
                   "1-Croissant, 2-Decroissant ?\n");
            scanf("%d", &ordre);
            a_Tri(b, bp, choixTri, ordre, nombreLignes);
            break;
        case 3:
            printf("\nVeuillez entrer le nombre de millisecondes\n");
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
            if(min>max){  //Si le deuxieme temps est inferieur au premier, on échange les deux temps
                    tmp = max;
                    max = min;
                    min = tmp;
                }
            r_moyenne(b, min, max, nombreLignes);
            break;
        case 6:
            printf("\nVeuillez selectionner :\n");
            printf("\n1 - Recherche de la frequence minimale:\n");
            printf("\n2 - Recherche de la frequence maximale:\n");
            scanf("%d", &max);
            r_maxMin(b, max, nombreLignes);
            break;
        case 0:
            free(b); //On libére l'espace mémoire alloué au début du programme
            return 0;
            break;

        }
    }
}
