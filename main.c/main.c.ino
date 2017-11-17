#include "arduino.h"
#include "cardio.h"

int temps = 0, tension = 0, bat = 0, maxval = 300;
int pulsation = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {

 bat = donnees(&temps, bat, &tension, &maxval, &pulsation);
  
  if ( temps % 5000 == 0){
        Serial.print(temps);
        Serial.print(";");
        Serial.println(bat*(60/5));
        bat = 0;
     }
  delay(100);
  temps = temps +100;
}
