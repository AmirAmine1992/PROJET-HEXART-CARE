#include <stdio.h>
#include <stdlib.h>

#include "donnees.h"
#include "actions.h"

int main()
{
    //Declarations
    int i, nombreLignes;
    Patient personne;

    //Appels
    nombreLignes = collecteDonnees(&personne.tab, &personne.tabPouls);

    for(i=0; i<nombreLignes-1; i++){
           printf("%d;%d \n", personne.tab[i].temps, personne.tab[i].bpm);            //On copie le contenu du tableau "tab" dans le tableau "tabpouls"
        }

    menu(&personne.tab, &personne.tabPouls, nombreLignes);

return 0;
}
