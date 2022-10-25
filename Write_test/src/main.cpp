#include <Arduino.h>

// definitions
#define DELAY_TIME 12
#define LED_FLASH 13

int count = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_FLASH, OUTPUT);
}

void loop()
{
  Serial.print(count++);
  Serial.println("Hello World");
  delay(DELAY_TIME);
}