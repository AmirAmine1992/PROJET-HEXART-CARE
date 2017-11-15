#include <stdio.h>



void parametre_Chenille()
{
{
for( i = 4; i<=13; i++ )
{
digitalWrite(i, HIGH);
delay(20);
digitalWrite(i,LOW);
}
        delay(500);
        
}
}

void Joli_Coeur()
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

void Parametre_1_LED_sur_2()

{
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(200);
    
}

void Parametre_1_Sur_N()
{
    
    for( i = 0; i<=9; i=i+n){
        digitalWrite(4+i, HIGH);
        
    }
    delay(1000);
    for( i = 0; i<=9; i=i+n){
        digitalWrite(4+i, LOW);
    }
    delay(500);
}

void Parametre_Chenille_Speciale()
{
    
    
    for( i = 4; i<=13; i++ ){
        digitalWrite(i, HIGH);
        delay(10);
        digitalWrite(i,LOW);
    }
    
    for( i = 13; i>=4; i-- ){
        digitalWrite(i,HIGH);
        delay(20);
        digitalWrite(i,LOW);
    }
    digitalWrite(13,HIGH);
    delay(20);
    digitalWrite(13,LOW);
    delay(500);
    
}
void Parametre_toutes_les_LED()

{
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    delay(200);
    
}

void chenille_ameliorer()
{
    digitalWrite(4,LOW);
    delay(100);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(100);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(100);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(100);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    loop;
}
