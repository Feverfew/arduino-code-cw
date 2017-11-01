#include "Arduino.h"
int strength;
int val;

void setup()
{
    /* pinMode(14, INPUT); */
    pinMode(11, OUTPUT);
    /* Serial.begin(9600); */
}

void loop()
{
    val = analogRead(1);
    strength = map(val, 0, 1023, 0, 255);
    Serial.println(val);
    analogWrite(11, strength);
}
