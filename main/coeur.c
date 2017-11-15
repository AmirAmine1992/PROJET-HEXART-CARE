#include "coeur.h"
#include "arduino.h"

void set(void)
  { int i=4;
    while(i<=13){
         pinMode(i, OUTPUT);
        i++;  
       }
  }
void ChenilleSpecial(void)
  {int i=4;
    digitalWrite(10,HIGH);
    digitalWrite(6,HIGH);
    delay (250);
    digitalWrite(10,HIGH);
    digitalWrite(6,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(8,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    delay(250);
    digitalWrite(13,HIGH);
    digitalWrite(8,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    delay(500);

    for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,HIGH);
      delay(50);
      digitalWrite(i,LOW);
      delay(25);
    }
  }





  

void Chenille(void)
{int i=0;
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,HIGH);
      delay(50);
      digitalWrite(i,LOW);
      delay(25);
    }
}





void ChenilleAmeliorer(void)
{int i=0;
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,HIGH);
      delay(50);
      digitalWrite(i,LOW);
      digitalWrite(13,HIGH);
      delay(65);
      
    }
}








void AllLed(void)
{
  int i=0;
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,HIGH);
    }
 delay(200);
  for(i=4 ; i<=13 ; i++)
    {
      digitalWrite(i,LOW);
    }
 delay(500);     
}


void ChenilleDouble(void)
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
  delay(50);   

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
  delay(50);

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
  delay(50);

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
  delay(50);

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
  delay(50);

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
  delay(500);

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
  delay(50);

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
  delay(50);

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
  delay(50);

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
  delay(50);
}

void LedUnSurN(int n)
{int i=0;
  for( i = 0; i<=9; i=i+n){
    digitalWrite(4+i, HIGH);
    
    }
     delay(1000);
  for( i = 0; i<=9; i=i+n){
    digitalWrite(4+i, LOW);
    }
    delay(500);
}

void LedUnSur2(void)
{int i=0;
  for( i = 0; i<=9; i=i+2){
    digitalWrite(4+i, HIGH);
    
    }
     delay(1000);
  for( i = 0; i<=9; i=i+2){
    digitalWrite(4+i, LOW);
    }
    delay(500);
}









































  



