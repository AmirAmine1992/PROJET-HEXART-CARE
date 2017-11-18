#include "coeur.h"               // inclusion des fichier necessaire au fonctionnement du programme
#include "arduino.h"
#include "param.h"
#include "cardio.h"
#include "coeur.h" 

unsigned long tempsPrecedent = 0;
int tension = 0, bat = 0, pulsation = 0;   


void setup (){

  set();                                //initialisation des pins pour le fonctionnement du coeur de led
  Serial.begin(9600);                   //initialisation du port serie
}
void loop (){
unsigned long temps = millis();
bat = donnees(bat, &tension, &pulsation, paramAllu, n); //appel de la fonction qui detecte les battements du coeur à partir des données recoltées et controle le coeur de led
  
  if ( temps - tempsPrecedent > 5000){                    // si l'intervalle de temps est veirifié
        Serial.print(temps);                  //envoyé le temps actuel avec le battement par minute sous format CSV
        Serial.print(";");
        Serial.println(bat*(60/5));           //calcule le nombre de battements par minute
        bat = 0;                              // reinitialisation du nombre de battement
        tempsPrecedent = temps;
     }
}

