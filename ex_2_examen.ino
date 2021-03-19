//Javier Reverte
//19/03/21
//con dos botones se necesita que el led se encienda durante 1 segundo una unica vez despues de conectar el arduinio, despues necesito que el led se encienda si pulso uno de los botones en el otro caso estara apagado 
int ledpin1 = 6;
int bottonpin1 = 7;
int bottonpin2 = 8;


void setup() {
 pinMode(ledpin1, OUTPUT);
pinMode(bottonpin1, INPUT);
pinMode(bottonpin2, INPUT);
 
 digitalWrite(ledpin1, HIGH); 
 delay(1000);
 digitalWrite(ledpin1, LOW);
 delay(500); 

}

void loop() {        
  if (digitalRead(bottonpin1) == HIGH) {
digitalWrite(ledpin1, HIGH);

}
else if (digitalRead(bottonpin2) == HIGH) {
digitalWrite(ledpin1, HIGH);
}
  
}
