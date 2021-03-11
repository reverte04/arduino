// Incluimos la biblioteca 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
}


void loop() {
  // Serial.available nos dice que tenemos bytes disponibles 
  if (Serial.available()>1) {
    // esperamos a que llegue todo el mensaje
    delay(100);
    // Le decimos a la pantalla que se ponga en blanco
    lcd.clear();
    // Leer todos los caracteres
    while (Serial.available() > 1) {
      // Poner uno por uno en el LCD
      lcd.write(Serial.read());
    }
    // Destruimos el último byte del buffer que es un byte de "fin"
    Serial.read();
  }
}
