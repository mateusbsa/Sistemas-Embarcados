
int led = 9;
int botao = 2;
int estado = 0;


void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  delay(2000)
}

void loop() {
  estado = digitalRead(botao);
  if(estado == 0){
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    delay(1000);
    }
  if( estado == 1){
    digitalWrite(led, HIGH);
    delay(5000);
    digitalWrite(led, LOW);
    delay(25000);    
  }
  
  
}
