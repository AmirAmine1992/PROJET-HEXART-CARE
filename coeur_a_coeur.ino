int i=0,j=0;
void setup() {
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);

}
void loop() { 
 for(i=4;i<8;i++){
  digitalWrite(i,HIGH);
 }
 digitalWrite(13,HIGH);
 digitalWrite(8,HIGH);
 delay(1000);
 for(i=4;i<8;i++){
  digitalWrite(i,LOW);
 }
 digitalWrite(13,LOW);
digitalWrite(8,LOW);
delay(100);
for (j=8;j<=13;j++){
  digitalWrite (j,HIGH);
}
  delay(1000);
  for (j=8;j<=13;j++){
  digitalWrite (j,LOW);
  delay(50);
  
}
 
}
