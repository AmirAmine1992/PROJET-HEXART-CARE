int i=4, count = 4;
bool boucle = false;
void setup() {
 
  while(i<=13){
    pinMode(i, OUTPUT);
    i++;  
  }
  i=4;
}

void loop() {
 
  
    for( i = 4; i<=13;i++){
      digitalWrite(i, HIGH);
    }
    delay(100);
    for( i = 4; i<=13;i++){
      digitalWrite(i, LOW);
    }
    delay(75);
    
    for( i = 4; i<=13;i++){
      digitalWrite(i, HIGH);
    }
    delay(100);
    for( i = 4; i<=13;i++){
      digitalWrite(i, LOW);
    }
    delay(1000);
   
  }
