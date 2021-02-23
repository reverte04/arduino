/*
 * 
 * Nombre: javi reverte 
 * Fecha: 21/02/2021
 * Este programa es una modificación del blink
 * Sirve para comprobar que los LED funcionan correctamente y están bien conectados. No revisa el botón de input. 
*/

//en este caso los pines de los leds estan del 4 al 10 y se inicializan todos a la vez
int buttonPin=2;
int switchState = 0;

void setup() {
  //bucle for para inicializar todos los leds
    for (int x = 3; x < 12; x++) {
    pinMode(x, OUTPUT);
  }
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
  
  /*
   * Esto es equivalente a escribir lo siguiente:
   * pinMode(4, OUTPUT);
   * pinMode(5, OUTPUT);
   * pinMode(5, OUTPUT);
   * pinMode(7, OUTPUT);
   * pinMode(8, OUTPUT);
   * pinMode(9, OUTPUT);
   * pinMode(10, OUTPUT);
   * Pero es más fácil de cambiar si en vez del 4 al 10 fuera del 5 al 11 solo hay que cambiar los parámetros del for
   */
}

void loop() {
  bool parpadear = revisarBoton();
  if(parpadear){
    Serial.println("parpadea");
    parpadeo();
  }
  else{
    apagar();
  }

}

void parpadeo() {
    //utilizo también un bucle for para encender los leds
  for (int x = 3; x < 12; x++) {
    digitalWrite(x, LOW);
  }
  delay(1000); //delay del rato que están encendidos los leds
  //y, como no, utilizo un bucle for para apagar los leds
   for (int x = 3; x < 12; x++) {
    digitalWrite(x, LOW);
  }
  delay(1000);
}

void apagar(){
     for (int x = 3; x < 12; x++) {
    digitalWrite(x, HIGH );
  }
}



bool revisarBoton() {
    switchState = digitalRead(buttonPin);
    Serial.println(switchState);
  if (switchState == HIGH){
    return true;
  }
  else{
    return false;
  }
}
