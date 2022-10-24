// include
#include <Arduino.h>


// define
#define BLINK_LED 13



void setup() {
  pinMode(BLINK_LED,OUTPUT);

}

void loop() {
 digitalWrite(BLINK_LED,!digitalRead(BLINK_LED));
 delay(500);
}