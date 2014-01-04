#include <PT04.h>

const int led = 13;

PT04 flashTrigger;

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  if(flashTrigger.hasTriggered())
  {
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(50);
    flashTrigger.hasTriggered(); // remove triggers during delay
  }
}
