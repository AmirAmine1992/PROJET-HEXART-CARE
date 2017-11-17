#include "coeur.h"
#include "arduino.h"
#include "param.h"
#include "cardio.h"


int temps = 0, tension = 0, bat = 0, maxval = 300, pulsation = 0;


void setup (){

  set();
  Serial.begin(9600); 
}
void loop (){

bat = donnees(bat, &tension, &pulsation, paramAllu, n);
  
  if ( temps % 5000 == 0){
        Serial.print(temps);
        Serial.print(";");
        Serial.println(bat*(60/5));
        bat = 0;
     }
  delay(100);
  temps = temps +100;
            
            

   
}

