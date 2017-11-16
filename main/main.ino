#include "coeur.h"
#include "arduino.h"
#include "param.h"

void setup (){
  
 
  set();

}
void loop (){

  switch(paramAllu)
  {
    case 1:
      AllLed();
      break;

    case 2:
      LedUnSurN(n);
      break;

    case 3:
      LedChoix(n);
      break;

      
    case 4:
      switch(n)
        {
          case 1:
           Chenille();
           break;

          case 2:
           ChenilleDouble();
           break;

          case 3:
           ChenilleDouble();
           break;
           
        
        }  
  }  
}

