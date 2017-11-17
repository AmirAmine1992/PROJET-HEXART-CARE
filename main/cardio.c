  #include "arduino.h"
  #include "cardio.h"
  #include "coeur.h"
int donnees(int bat, int *tension, int *pulsation, int a, int b){
  
  *tension = analogRead(0); // on lit la valeur analogique
   
   
  if(*tension >= 300 && *pulsation == 0){ // Si la valeur analog
        AllumageCoeur(a, b); // on allume le coeur de led lors dela detection d'une pulsation
        bat = bat +1;

    *pulsation = 1;
    }

  else if(*tension < 300){
    *pulsation = 0;
    ledOff();
    }
    
   return bat;
 
 
}
