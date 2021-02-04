int switchState = 0;

//variables globales
const int redPin = 2;
const int bluePin = 6;
const int buttonPin = 4;

void setup() {
  // put your setup code here, to run once:
//Iniciando leds
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
//Ininiando botón
pinMode(buttonPin, INPUT);

}

void loop() {
  //leer el estado del botón
  switchState = digitalRead(buttonPin);
  // esto es un comentario
  if (switchState == LOW){
  //el botón no esta pulsadeo
digitalWrite(redPin,HIGH); //se enciende el rojo
digitalWrite(bluePin,LOW); //se apaga el azul
}
else {
  //elsa let it go
  //pulsamos el botón
  //el botón esta pulsado
digitalWrite(redPin,LOW); //se enciende el rojo
digitalWrite(bluePin,HIGH); //se apaga el azul
delay(1000);

}
}
