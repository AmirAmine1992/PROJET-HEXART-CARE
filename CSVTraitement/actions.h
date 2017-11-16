#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

#define MAX 77
#define NOM 45

typedef struct Battements{
    int temps;
    int bpm;
}Battements;

typedef struct Patient{
    Battements tabPouls[MAX];
    Battements tab[MAX];
    char nom[NOM];
}Patient;

void r_maxMin(Battements *b, int maxx, int nombreLignes);
void r_moyenne(Battements *b, int minn, int maxx, int nombreLignes);
void r_temps(Battements *b, int temps, int nombreLignes);
int r_dichotomique(Battements *b, int nombreCases, int valeurRecherche);
void a_OrdreCrois(Battements *b, int nombreLignes);
void a_OrdreDec(Battements *b, int nombreLignes);
void tri_insertion(Battements *t, int n);
void a_Tri(Battements *b, Battements *bp, int choixTri, int ordre, int nombreLignes);
#endif // ACTIONS_H_INCLUDED

