
#include <Servo.h>
Servo driveServo;

int buttonUp = 12;                // Up button pin
int buttonDown = 10;              // Down button pin
int buttonVal1;         
int buttonVal2;
int dt=100;

int yellowLed= 8;                 // LED for up
int greenLed = 6;                 // LED for down
int redLed = 3;                   // Buzzer Led

int Servopin = 9;
int servoVal;
int angle = 92;                   // start at middle position

int angleMin =  0;
int angleMax =  180;

int buzzer = 5;


void setup() {
pinMode(buttonUp, INPUT_PULLUP);
pinMode(buttonDown, INPUT_PULLUP);

pinMode(yellowLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(redLed, OUTPUT);

pinMode(buzzer, OUTPUT);
//digitalWrite(button1, HIGH);
//digitalWrite(button2, HIGH);

pinMode(Servopin, OUTPUT);
driveServo.attach(Servopin);
Serial.begin(9600);
}

void loop() {
 if(digitalRead(buttonUp) == LOW){
  if(angle < angleMax){
      angle++;
      
  }
 }

 if(digitalRead(buttonDown)== LOW){
  if(angle > angleMin){
      angle--;
  }
 }

driveServo.write(angle);


if (angle < 91){
  
 digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
}

else if(angle > 97 ){
    digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
   digitalWrite(greenLed, LOW);
}
else{
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
}

if (angle == 0 ){
  digitalWrite(buzzer, HIGH);
  digitalWrite(redLed, HIGH);
}

else if (angle == 180){
  digitalWrite(buzzer, HIGH);
  digitalWrite(redLed, HIGH);
}

else {
  digitalWrite(buzzer, LOW);
  digitalWrite(redLed, LOW);
}
 Serial.print("angle = ");
 Serial.println(angle);
 delay(dt);
}
