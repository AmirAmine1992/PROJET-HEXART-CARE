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
    nombreLignes = collecteDonnees(&personne);
    menu(personne.tab, personne.tabPouls, nombreLignes);


    return 0;
}
