#include <Ultrasonic.h>
Ultrasonic u(10,8);
byte greenpin = 12;
byte yellowpin = 5;
byte redpin = 4;
byte passbuz = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(redpin, OUTPUT);
  pinMode(passbuz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenpin, LOW);
  digitalWrite(yellowpin, LOW);
  digitalWrite(redpin, LOW);

  int d = u.read();
  // Serial.print("Distance is "); 
  // Serial.print(d);
  // Serial.println(" cm");

  if(d >= 11 && d <=26){
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin, LOW);
    digitalWrite(yellowpin , HIGH);
    tone(passbuz, 500);
  }
  else if(d <=10){
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, HIGH);
    tone(passbuz, 1500);
  }
  else{
  digitalWrite(greenpin, HIGH);
  noTone(passbuz);
  }
 delay(500);
}