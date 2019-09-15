#include <Arduino.h>
#define PIN 2
#define TIME_BLINK 1000

bool state = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN, state);
  state = ! state;
  delay(TIME_BLINK);
}
