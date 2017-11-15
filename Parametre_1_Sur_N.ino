int i=4, n = 4;
bool boucle = false;
void setup() {
 
  while(i<=13){
    pinMode(i, OUTPUT);
    i++;  
  }
  i=4;
}

void loop() {
  
  for( i = 0; i<=9; i=i+n){
    digitalWrite(4+i, HIGH);
    
    }
     delay(1000);
  for( i = 0; i<=9; i=i+n){
    digitalWrite(4+i, LOW);
    }
    delay(500);
  }
