#include "Arduino.h"
#include "SomeSerial.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

SomeSerial mySerial(&Serial);

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  mySerial.begin(115200);
}

void loop()
{
  mySerial.print("hi ");
  mySerial.println(millis());
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

   // wait for a second
  delay(1000);
}
