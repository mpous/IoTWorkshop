/*
  Photosensor + LED + ethernet shield example
  Nº4 (pg 27)
 */
int ledPin = 8; // led 8
int sensorPin = A0; //e.g LDR
int sensorValue = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); //log 0 or 1
  
  if (sensorValue < 300)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
