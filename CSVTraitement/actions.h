#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

#define MAX 2000
#define NOM 45

typedef struct Battements{ // Cette structure represente les lignes du fichier.
    int temps;
    int bpm;
}Battements;

typedef struct Tmp{
    Battements tabTmp[MAX];
}Tmp;

typedef struct Patient{
    Battements *tabPouls; //Le tableau qui sera trié en fonction du pouls
    Battements *tab;    //Le tableau original
    char nom[NOM];
}Patient;

void r_maxMin(Battements *b, int maxx, int nombreLignes);
void r_moyenne(Battements *b, int minn, int maxx, int nombreLignes);
void r_temps(Battements *b, int temps, int nombreLignes);
int r_dichotomique(Battements *b, int nombreCases, int valeurRecherche);
void a_OrdreCrois(Battements *b, int nombreLignes);
void a_OrdreDec(Battements *b, int nombreLignes);
void tri_insertion(Battements *b, int n);
void a_Tri(Battements *b, Battements *bp, int choixTri, int ordre, int nombreLignes);
#endif // ACTIONS_H_INCLUDED

