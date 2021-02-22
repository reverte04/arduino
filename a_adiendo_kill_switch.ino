// colocar en la sección de variables globales

int switchState=0;
bool isTheButtonBeingPressed= false;
bool play = false;
//recordar que el pin del botón puede cambiar
const int buttonPin=5;

//incluir dentro del setup()
pinMode(pinBUtton,IMPUT)

//incluir como loop)
void loop() {
 checkButton();
 if (play){
  // pon aquí lo que quieras ejecutar
 }
}

// función checkbutton()
// poner fuera del setup y del loop porque es independiente

void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed= true;
    }
  }
  else{
    isTheButtonBeingPressed = false;
  }
}
