#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
int r_dichotomique(Battements *b, int nombreCases, int valeurRecherche ){

  int trouve = 0, min = 0, max = nombreCases, mil;

  // Recherche

  while(((max - min) >= 1 && trouve==0)){

    mil = (min + max)/2;  //on d�termine l'indice de milieu

    if(b[mil].temps == valeurRecherche){ //On voit si la valeur du milieu est celle recherch�e
        trouve = 1;
        }

    else if(b[mil].temps > valeurRecherche){ // Si la valeur du milieu est superieure � la valeure recherch�e, on prend l'intervale de gauche
        max = mil;
        }

    else { //Sinon on prend celui de droite
        min = mil;
        }
    }

    //Retours

  if(b[mil].temps == valeurRecherche) { //si on a trouv� la valeur recherch�e, on retourne l'indice
        return(mil);
    }

  else {
        return(-1); //sinon on retourne -1
    }
}

void r_temps(Battements *b, int temps){
    int indice = r_dichotomique(b, MAX, temps); //On recherche l'indice du temps dans le tableau de structures

    if (indice!=-1){ // Si on trouve un element
        printf("Temps : %dms , Frequence Cardiaque : %dBPM", b[indice].temps, b[indice].bpm); //On affiche le temps et les BPM
    }
    else {
        printf("Pardon, nous n'avons pas pu trouver les donnees que vous recherchez ( temps introuvable )");
    }
}

void r_moyenne(Battements b[], int minn, int maxx){
    int indiceMin = r_dichotomique(b,MAX, minn); //On recherche l'indice du premier et dernier temps de l'intervalle
    int indiceMax = r_dichotomique(b,MAX, maxx);
    int i, somme = 0 , moyenne = 0;

    if(indiceMax!=-1 && indiceMin!=-1){ // Si on trouve les deux temps ( pas d'erreur )

        //On additionne tous les BPM dans l'intervalle et on les divise par leur nombre
        for (i = indiceMin; i<=indiceMax; i++){
            somme = somme + b[i].bpm;
        }
        moyenne = somme / (indiceMax-indiceMin+1);

        printf("La moyenne des differentes frequences est de : %dBPM", moyenne);
    }
    else {
        printf("Pardon, nous n'avons pas pu trouver les donnees que vous recherchez ( temps introuvables )");
    }
}

void r_maxMin(Battements *b, int maxx ){
    //tri
    if (maxx == 2){
    printf("La plus grande fr�quence cardiaque est � %dms et est de %dBPM", b[78].temps, b[78].bpm);
    }
    else if(maxx == 1){
     printf("La plus petite fr�quence cardiaque est � %dms et est de %dBPM", b[0].temps, b[0].bpm);
    }
}

