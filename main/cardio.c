  
  //ce fichier contient les fonctions necessaire a la recolte, calcule et traitement des données
  
  
  #include "arduino.h"
  #include "cardio.h"
  #include "coeur.h"
  
int donnees(int bat, int *tension, int *pulsation, int a, int b){ //fonction de detection des pulsation

  
  
  *tension = analogRead(0);                           // on lit la valeur analogique
   
   
  if(*tension >= 300 && *pulsation == 0){             // Si la valeur analog depasse le seuil en dehors de l'intervalle d'une pulsation 
        AllumageCoeur(a, b);                          // on allume le coeur de led lors de la detection d'une pulsation
        bat = bat +1;                                 //incrementation du nombre de battements 

    *pulsation = 1;                                   //debut de l'intervalle d'une pulsation
    }

  else if(*tension < 300){                           //si la tension devient inferieur au seuil
    *pulsation = 0;                                  //fin de l'interalle d'une pulsation
    ledOff();                                        //extinction du coeur ded led
    }
    
   return bat;                                       //la fonction retourne le nombre de battements
 
 
}
