//Javier Reverte 
//19/03/21
// Utilizando 3 leds se necesita que el programa que haga lo siguente: Tras conectarlo, durante 1 segundo habrá un led que se encenderá una única vez. Deaspués los 3 leds se 
//encenderán y apagarán estando 1 segundo encendido y 0,5 segundos apagado en bucle. 

int ledpin1 = 6;
int ledpin2 = 10;
int ledpin3 = 11;

void setup() {
 pinMode(ledpin3, OUTPUT);
 pinMode(ledpin2, OUTPUT);
 pinMode(ledpin1, OUTPUT);

 digitalWrite(ledpin3, HIGH); 
 delay(1000);
 digitalWrite(ledpin3, LOW);
 delay(1000);
 digitalWrite(ledpin2, LOW); 
 digitalWrite(ledpin1, LOW); 
 delay(1000);

}

void loop() {
 
 digitalWrite(ledpin3, HIGH);   
 digitalWrite(ledpin2, HIGH); 
 digitalWrite(ledpin1, HIGH); 
 delay(500); 
 digitalWrite(ledpin3, LOW); 
 digitalWrite(ledpin2, LOW); 
 digitalWrite(ledpin1, LOW); 
 delay(500);
}
