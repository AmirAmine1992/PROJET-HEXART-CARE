  #include "arduino.h"
  #include "cardio.h"

int donnees(int *temps, int bat, int *tension, int *maxval, int *pulsation){
  
  *tension = analogRead(0); // on lit la valeur analogique

  if(*tension >= 300 && *pulsation == 0){ // Si la valeur analog

        bat = bat +1;

    *pulsation = 1;
    }

  else if(*tension < 300){
    *pulsation = 0;
    }
    
   return bat;
 
 
}
