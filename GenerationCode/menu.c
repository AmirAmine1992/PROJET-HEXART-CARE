#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "GenerationCode.h"

void menu(){

    int parametreAffichage, nbLedsAllumees = -1, ledAllumee = -1;

        printf("Bonjour, Veuillez choisir les parametres d'affichage de vos Leds s'il vous plait :"
            "\n1 - Allumer toutes les LEDs"
            "\n2 - Allumer une Led sur n"
            "\n3 - Allumer la Led de votre choix"
            "\n4 - Allumer les Leds en chenille\n");

        scanf("%d", &parametreAffichage);

        switch (parametreAffichage){
        case 1:
            generation_ParamH(parametreAffichage, nbLedsAllumees, ledAllumee);
            printf("\nVotre fichier est pret, bonne journee :D");
        case 2:

            while (nbLedsAllumees < 0){
                printf("\nVeuillez entrer la valeur de n ( 2 - 10 ): ");
                scanf("%d", &nbLedsAllumees);
                if (nbLedsAllumees < 1 || nbLedsAllumees >= 10){
                    printf("\n Vous devez entrer une valeur comprise entre 2 et 10   !\n");
                    nbLedsAllumees = -1;
                }
            }
            generation_ParamH(parametreAffichage, nbLedsAllumees, ledAllumee);
            printf("\nVotre fichier est pret, bonne journee :D");
            break;
        case 3:

            while (ledAllumee < 0){
                printf("\nChoisissez la Led a allumer ( entre 0 et 9 ) : \n");
                scanf("%d", &ledAllumee);

                if (ledAllumee < 0 || ledAllumee > 9){
                    printf("\nVous devez entrer une valeur comprise entre 1 et 9 \n");
                    ledAllumee = -1;
                }
            }
            printf("\nVotre fichier est pret, bonne journee :D");
            generation_ParamH(parametreAffichage, nbLedsAllumees, ledAllumee);
            break;

        case 4:

            while (nbLedsAllumees < 0){
                printf("\n1- Chenille Standard"
                       "\n2- Chenille Reversible"
                       "\n3- Chenille Aleatoire\n");
                scanf("%d", &nbLedsAllumees);

                if (nbLedsAllumees < 1 || nbLedsAllumees > 3){
                    printf("\nVous devez entrer une valeur comprise entre 1 et 3 \n");
                    nbLedsAllumees = -1;
                }
            }
            printf("\nVotre fichier est pret, bonne journee :D");
            generation_ParamH(parametreAffichage, nbLedsAllumees, ledAllumee);
            break;

        default:
            printf("\nVous devez entrer une valeur comprise entre 1 et 4 !!\n");
            break;
        }
}

