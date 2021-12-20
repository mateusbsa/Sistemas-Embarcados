int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  delay(5000);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(5000);
  digitalWrite(led, LOW);
  delay(30000); 
}
