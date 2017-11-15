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
void a_EnOrdre(Battements *b, int nombreLignes);

#endif // ACTIONS_H_INCLUDED
