#include <Arduino.h>
#define PIN 2

bool state = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN, state);
  state = ! state;
  delay(1000);
}
