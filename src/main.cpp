#include "Arduino.h"
int val;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    val = analogRead(1);
    Serial.println(val);
}
