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

void r_temps(Battements *b, int temps, int nombreLignes){
    int indice = r_dichotomique(b, nombreLignes, temps); //On recherche l'indice du temps dans le tableau de structures

    if (indice!=-1){ // Si on trouve un element
        printf("Temps : %dms , Frequence Cardiaque : %dBPM\n", b[indice].temps, b[indice].bpm); //On affiche le temps et les BPM
    }
    else {
        printf("Pardon, nous n'avons pas pu trouver les donnees que vous recherchez ( temps introuvable )\n");
    }
}

void r_moyenne(Battements b[], int minn, int maxx, int nombreLignes){
    int indiceMin = r_dichotomique(b,nombreLignes, minn); //On recherche l'indice du premier et dernier temps de l'intervalle
    int indiceMax = r_dichotomique(b,nombreLignes, maxx);
    int i, somme = 0 , moyenne = 0;

    if(indiceMax!=-1 && indiceMin!=-1){ // Si on trouve les deux temps ( pas d'erreur )

        //On additionne tous les BPM dans l'intervalle et on les divise par leur nombre
        for (i = indiceMin; i<=indiceMax; i++){
            somme = somme + b[i].bpm;
        }
        moyenne = somme / (indiceMax-indiceMin+1);

        printf("La moyenne des differentes frequences est de : %dBPM\n", moyenne);
    }
    else {
        printf("Pardon, nous n'avons pas pu trouver les donnees que vous recherchez ( temps introuvables )\n");
    }
}

void r_maxMin(Battements *bp, int maxx, int nombreLignes ){

    tri_insertion(bp, nombreLignes); // On trie le tableau pour avoir le plus petit element au premier indice et vice versa
    if (maxx == 2){
    printf("La plus grande fr�quence cardiaque est � %dms et est de %dBPM\n", bp[nombreLignes-2].temps, bp[nombreLignes-2].bpm);
    }
    else if(maxx == 1){
     printf("La plus petite fr�quence cardiaque est � %dms et est de %dBPM\n", bp[0].temps, bp[0].bpm);
    }
}

void a_OrdreCrois(Battements *b, int nombreLignes){
    int i, j;
    for (i=0; i<nombreLignes-1; i++){
        printf("%d;%d\n", b[i].temps, b[i].bpm);
    }
}
void a_OrdreDec(Battements *b, int nombreLignes){
    int i, j;
    for (i=nombreLignes-2; i>=0; i--){
        printf("%d;%d\n", b[i].temps, b[i].bpm);
    }

}

void tri_insertion(Battements *b, int n)
{
    int i, j;
    int v, y;

    for (i = 1; i < n; i++) {
        v = b[i].temps; // On stocke les valeurs en i du tableau dans des variables temporaires
        y = b[i].bpm;

        j = i;
        while (j > 0 && b[j - 1].bpm > y) {
            b[j].bpm = b[j - 1].bpm;         // On d�cale les �l�ments situ�s avant b[i] vers la droite
            b[j].temps = b[j - 1].temps;    // jusqu'� trouver la position d'insertion
            j--;
        }

        b[j].temps = v; // Insertion de la valeur stock�e
        b[j].bpm = y;
    }
}

void a_Tri(Battements *b, Battements *bp, int choixTri, int ordre, int nombreLignes){

    if(choixTri == 1){ //Affichage par Temps, aucun tri necessaire, on utilise le tableau original
        if(ordre == 1){
            a_OrdreCrois(b, nombreLignes);
        }
        else{
            a_OrdreDec(b, nombreLignes);
        }
    }
    else if(choixTri == 2){ //Affichage par Pouls, on doit trier le tableau "tabPouls" en fonction du pouls.
        tri_insertion(bp, nombreLignes-1);
        if(ordre == 1){
            a_OrdreCrois(bp, nombreLignes);
        }
        else{
            a_OrdreDec(bp, nombreLignes);
        }
    }
}
