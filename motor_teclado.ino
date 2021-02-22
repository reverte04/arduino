const int motorPin = 9;

int potenciometerValue = 0;
int motorValue =0;
int keyVal = 0;
void setup() {
  pinMode (motorPin, OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
 keyVal = analogRead(A0);
 Serial.println(keyVal);



 if(keyVal >=1023){
     analogWrite(motorPin, 0);

  }
  else if(keyVal >= 990 && keyVal <=1010){
     analogWrite(motorPin, 75);
   
  }
   else if(keyVal >= 960 && keyVal <=980){
         analogWrite(motorPin, 160);

  }
  else if(keyVal >= 505 && keyVal <515){
      analogWrite(motorPin, 250);
  }
  
  else{
   
  }
}
