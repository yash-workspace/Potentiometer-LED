#include <Arduino.h>
int readpin = A5;

void setup() {
  // put your setup code here, to run once:
  pinMode(readpin,INPUT);
  Serial.begin(96000);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogRead(readpin);
  Serial.println(analogRead(readpin));
  delay(500);
}


