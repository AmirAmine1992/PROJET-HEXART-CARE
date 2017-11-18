

// ce fichier contient toute les fonction qui controle le coeur de led


#include "coeur.h"                       
#include "arduino.h"

void set(void)
  { int i=4;
    while(i<=13){
         pinMode(i, OUTPUT);
        i++;  
       }
   
  }


void Chenille(void)
{
  int i=0;
  for(i=4 ; i<=13 ; i++)          // a chaque valeur de i une led s'allume puis s'eteint
    {
      digitalWrite(i,HIGH);
      delay(10);
      digitalWrite(i,LOW);
      
    }
}





void ChenilleAmeliorer()
{
  int i=0;
  for(i=4 ; i<=13 ; i++)        //a chaque valeur de i une led s'allume puis s'eteint et une led reste allumée
    {
      digitalWrite(i,HIGH);
      delay(10);
      digitalWrite(i,LOW);
      digitalWrite(13,HIGH);
      
      
    }
}








void AllLed(void)                  //toute les led s'allument puis s'eteignent en meme temps
{
  int i=0;
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,HIGH);
    }
 delay(50);
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,LOW);
    } 
 delay(50);       
}


void ChenilleDouble(void)                         // une chenille qui se divise en deux en partant du milieu 
{
  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);   

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);                          
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, HIGH);    
  delay(10);

  digitalWrite(13, HIGH);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, HIGH);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);

  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);                          
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);    
  delay(10);
}

void LedUnSurN(int a)             //cette fonction prends en parametre un nombre "a" generer par le generateur de code 
{
  int i=0;                         //une led s'allume parmi "a" led puis elles s'eteignent
  for( i = 0; i<=9; i=i+a){
    digitalWrite(4+i, HIGH);
    
    }
     delay(70);
  for( i = 0; i<=9; i=i+a){
    digitalWrite(4+i, LOW);
    }
    delay(30);
}


void LedChoix(int a)
{
  digitalWrite(a+4, HIGH);
  delay(70);
  digitalWrite(a+4, LOW);
  delay(30);
}


void ledOff(void)     // Cette fonction eteint toutes les leds 
{
  int i=0;
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,LOW);
    }
    delay(100);
}



void coeur_a_coeur(void)
{ int i=0, j=0;
   for(i=4;i<8;i++){
  digitalWrite(i,HIGH);
 }
 digitalWrite(13,HIGH);
 digitalWrite(8,HIGH);
 delay(50);
 for(i=4;i<8;i++){
  digitalWrite(i,LOW);
 }
 digitalWrite(13,LOW);
digitalWrite(8,LOW);

for (j=8;j<=13;j++){
  digitalWrite (j,HIGH);
}
delay(50);
  for (j=8;j<=13;j++){
  digitalWrite (j,LOW);
  
   }
}

void AllumageCoeur(int paramAllu, int n) //cette fonction prends en parametre deux constantes generer par le generateur de code dans param.h
{
  switch(paramAllu)                      //paramAllu controle le mode d'allumage selon le choix de l'utilisateur et n controle les leds de facon unitaire selon le choix de l'utilisateur
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
      switch(n)                        //dans ce cas n controle le sous-mode d'allumage
      {
          case 1:
           Chenille();
           break;

          case 2:
           ChenilleDouble();
           break;

          case 3:
           ChenilleAmeliorer();
           break;
           
        
      }
   case 5:
   coeur_a_coeur();  
  }  
}





































  



