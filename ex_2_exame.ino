//Javier Reverte
//19/03/21
//con dos botones se necesita que el led se encienda durante 1 segundo una unica vez despues de conectar el arduinio, despues necesito que el led se encienda si pulso uno de los botones en el otro caso estara apagado 
int switchState = 0;
int switchState2 = 0;
int redPin = 4;
int buttonPin1 = 7;
int buttonPin2 = 8;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  digitalWrite(redPin, HIGH); 
   delay(1000);
  digitalWrite(redPin, LOW); 
  delay(1000);
  
}

void loop() {
  switchState = digitalRead(buttonPin1);
  switchState2 = digitalRead(buttonPin2);
  if (switchState == LOW){
    digitalWrite(redPin, LOW);
    }
     else if (switchState = HIGH){
    digitalWrite(redPin, HIGH);
  }
  if (switchState2 == LOW){
    digitalWrite(redPin, LOW);
    }
     else if (switchState2 = HIGH){
    digitalWrite(redPin, HIGH);
  }
  
}
