//Colocar en la seccion de variables globales

int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=2;

//incluir dentro del setup

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  while (millis() < 5000) {


//incluir dentro del loop1

  checkButton();
 if (play) {
   // pon lo que quieras ejecutar
  }
  

//funcion checkbutton
//poner fuera del setup y del loop

void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
