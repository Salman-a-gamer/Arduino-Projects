// Install the Ultrasonic library by Eric Simoes

#include <Ultrasonic.h>
Ultrasonic u(10,8);  // Using module, u(trig, echo)
byte greenpin = 12;
byte yellowpin = 5;
byte redpin = 4;
byte passive_buzzer = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(redpin, OUTPUT);
  pinMode(passive_buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenpin, LOW);
  digitalWrite(yellowpin, LOW);
  digitalWrite(redpin, LOW);

  int d = u.read();   // read in cm by default
  
  // If you want to check the distnce uncomment the following lines
  // Serial.print("Distance is "); 
  // Serial.print(d);
  // Serial.println(" cm");

  // Range for yellow led in cm
  if(d >= 11 && d <=26){
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin, LOW);
    digitalWrite(yellowpin , HIGH);
    tone(passive_buzzer, 500);
  }
  else if(d <=10){   // range for red led in cm
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, HIGH);
    tone(passive_buzzer, 1500);
  }
  else{
  digitalWrite(greenpin, HIGH);     // Green led is always on by default
  noTone(passive_buzzer);
  }
  // Set the delay after every scan (milliseconds)
 delay(500);
}
