const int greenLEDPin = 9;
const int redLEDPin = 11;
const int blueLEDPin = 10;


const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;


int redValue = 0;
int greenValue = 0;
int blueValue = 0;


int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;


int redSensorMinValue = 1023;
int greenSensorMinValue = 1023;
int blueSensorMinValue = 1023;


int redSensorMaxValue = 0;
int greenSensorMaxValue = 0;
int blueSensorMaxValue = 0;


int swichstate = 0;
bool isTheButtonPressed = false;
bool StitchFlag = false;


int buttonPin = 2;





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(greenLEDPin, OUTPUT);
pinMode(redLEDPin, OUTPUT);
pinMode(blueLEDPin, OUTPUT);

pinMode(buttonPin, INPUT);


pinMode(LED_BUILTIN, OUTPUT);
calibrate();
}

void calibrate() {
  digitalWrite(LED_BUILTIN, HIGH);
  while (millis()<5000){
redSensorValue = analogRead(redSensorPin);
greenSensorValue = analogRead(greenSensorPin);
blueSensorValue = analogRead(blueSensorPin);
//calibramos el rojo
  if(redSensorValue > redSensorMaxValue);
    {
    redSensorMaxValue = redSensorValue; 
    }
  if(redSensorValue < redSensorMinValue)
    {
    redSensorMinValue = redSensorValue; 
    }

  if(greenSensorValue > greenSensorMaxValue);
    {
    greenSensorMaxValue = greenSensorValue; 
    }
 
  if(greenSensorValue < greenSensorMinValue)
    {
    greenSensorMinValue = greenSensorValue; 
    }
    
  if(blueSensorValue > blueSensorMaxValue);
    {
    blueSensorMaxValue = blueSensorValue; 
    }
  
  if(blueSensorValue < blueSensorMinValue)
    {
    blueSensorMinValue = blueSensorValue; 
    }

    
  }
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
swichstate = digitalRead(buttonPin);
  if(swichstate == HIGH)
  {
    if(isTheButtonPressed == false){
      isTheButtonPressed = true;
//      if(StitchFlag == false){
//        Serial.println("Encender");
//        StitchFlag = true;
//        }
//        else{
//        Serial.println("Holi");
//        StitchFlag = false;
//        }
   StitchFlag = !StitchFlag;
  }
  }                       
  else{
    
    isTheButtonPressed = false;
    }
    
    if (StitchFlag ==true){
      
      Stitch();
    }
    else {
    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);
    }
}//fin del loop

void Stitch() {
    // put your main code here, to run repeatedly:
redSensorValue = analogRead(redSensorPin); 
delay(5);
greenSensorValue = analogRead(greenSensorPin); 
delay(5);
blueSensorValue = analogRead(blueSensorPin); 

Serial.print("Raw Sensor Values \t Red ");
Serial.print(redSensorValue);
Serial.print("\t Green: ");
Serial.print(greenSensorValue);
Serial.print("\t Blue: ");
Serial.println(blueSensorValue);

redValue = map(redSensorValue,0,1023, 0, 255);
greenValue = map(greenSensorValue,0,1023, 0, 255);
blueValue = map(blueSensorValue,0,1023, 0, 255);

Serial.print("Mapped Sensor Valuuuues \t Red ");
Serial.print(redValue);
Serial.print("\t Green ");
Serial.print(greenValue);
Serial.print("\t Blue ");
Serial.println(blueValue);

analogWrite(redLEDPin, redValue);
analogWrite(greenLEDPin, greenValue);
analogWrite(blueLEDPin, blueValue);
}
