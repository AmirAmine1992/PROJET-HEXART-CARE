#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "GenerationCode.h"

void menu(){

    int parametreAffichage, n = -1;

        printf("Bonjour, Veuillez choisir les parametres d'affichage de vos Leds s'il vous plait :"
            "\n1 - Allumer toutes les LEDs"
            "\n2 - Allumer une Led sur n"
            "\n3 - Allumer la Led de votre choix"
            "\n4 - Allumer les Leds en chenille\n");

        scanf("%d", &parametreAffichage); // On récupere le

        switch (parametreAffichage){
        case 1:
            generation_ParamH(parametreAffichage, n);
            printf("\nVotre fichier est pret, bonne journee :D");
            break;
        case 2:

            while (n < 0){
                printf("\nVeuillez entrer la valeur de n ( 2 - 10 ): ");
                scanf("%d", &n);
                if (n < 1 || n >= 10){
                    printf("\n Vous devez entrer une valeur comprise entre 2 et 10   !\n");
                    n = -1;
                }
            }
            generation_ParamH(parametreAffichage, n);
            printf("\nVotre fichier est pret, bonne journee :D");
            break;
        case 3:

            while (n < 0){
                printf("\nChoisissez la Led a allumer ( entre 0 et 9 ) : \n");
                scanf("%d", &n);

                if (n < 0 || n > 9){
                    printf("\nVous devez entrer une valeur comprise entre 1 et 9 \n");
                    n = -1;
                }
            }
            printf("\nVotre fichier est pret, bonne journee :D");
            generation_ParamH(parametreAffichage, n);
            break;

        case 4:

            while (n < 0){
                printf("\n1- Chenille Standard"
                       "\n2- Chenille Reversible"
                       "\n3- Chenille Separee\n");
                scanf("%d", &n);

                if (n < 1 || n > 3){
                    printf("\nVous devez entrer une valeur comprise entre 1 et 3 \n");
                    n = -1;
                }
            }
            printf("\nVotre fichier est pret, bonne journee :D");
            generation_ParamH(parametreAffichage, n);
            break;

        default:
            printf("\nVous devez entrer une valeur comprise entre 1 et 4 !!\n");
            break;
        }
}

