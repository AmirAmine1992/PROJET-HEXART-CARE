#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

#define MAX 77
#define NOM 45

typedef struct Battements{
    int temps;
    int bpm;
}Battements;

typedef struct Patient{
    Battements tab[MAX];
    char nom[NOM];
}Patient;

void r_maxMin(Battements *b, int maxx);
void r_moyenne(Battements *b, int minn, int maxx);
void r_temps(Battements *b, int temps);
int r_dichotomique(Battements *b, int nombreCases, int valeurRecherche);

#endif // ACTIONS_H_INCLUDED
