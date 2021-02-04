int sensorValue;
int sensorLow = 1023;
int sensorHigh;
const int ledPin = 13;



void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
while (millis() < 5000) {
sensorValue = analogRead(A0);
if(sensorValue = sensorHigh) {  
}
if(sensorValue < sensorLow) {
  sensorLow = sensorValue;
}
}

digitalWrite(ledPin,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:



}
