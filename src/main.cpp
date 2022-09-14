#include <Arduino.h>
#include "System.h"

typedef enum
{
  A = 97,
  B
} event_t;

event_t letter;

System s;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (Serial.available())
  {

    int letra = Serial.read();
    letter = (event_t)letra;

    switch (letter)
    {
    case A:
      s.A();
      break;
    case B:
      s.B();
      break;
    default:
      Serial.println("No preciono nada");

    }

  }
}