#include <Arduino.h>

int redLED = D1;
int yellowLED = D0;
int greenLED = D2;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(3000); // ms
  digitalWrite(redLED, LOW);

  digitalWrite(yellowLED, HIGH);
  delay(500); // ms
  digitalWrite(yellowLED, LOW);

  digitalWrite(greenLED, HIGH);
  delay(2000); // ms
  digitalWrite(greenLED, LOW);
}