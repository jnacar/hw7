
int ledPin = 5; // select the pin for the LED

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 13; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  delay(1000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200); 
  }
  delay(1000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200); 
  }
  delay(1000);
  for (int i = 0; i < 20; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200); 
  }
  delay(1000);
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200); 
    
  }
  delay(1000);
}
