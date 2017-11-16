int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup() {
 Serial.begin(9600);

 pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  int valeurActuelle, valeurSeuil;
  long tempsDeDetection;
  
  digitalWrite(13, LOW);                          
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);                          
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);                          
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);                          
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);                          
  digitalWrite(4, LOW);

  valeurActuelle = analogRead(0);
  valeurSeuil = 500;

  if (valeurActuelle > valeurSeuil){
      if (valeurPrecedente <= valeurSeuil){
      tempsDeDetection = millis ();
          if (tempsDeDetection > (tempsPrecedent + 200)){
            Serial.print(tempsDeDetection);
            Serial.print(";");
            Serial.println( (1000.0 * 60.0) / (tempsDeDetection - tempsPrecedent),0);
           

          }
          }

      }
   valeurPrecedente = valeurActuelle;
  }


