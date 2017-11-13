#include "Arduino.h"
int val;
int green_led = 2;
int yellow_led = 8;
int red_led = 12;

void setup()
{
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(12, OUTPUT);
}

void loop()
{
    val = analogRead(1);
    Serial.println(val);
    if (Serial.available() > 0) {
        char score = (char) Serial.read();
        if (score == 'g') {
            digitalWrite(green_led, HIGH);
            digitalWrite(yellow_led, LOW);
            digitalWrite(red_led, LOW);
        } else if (score == 'y') {
            digitalWrite(green_led, LOW);
            digitalWrite(yellow_led, HIGH);
            digitalWrite(red_led, LOW);
        } else {
            digitalWrite(green_led, LOW);
            digitalWrite(yellow_led, LOW);
            digitalWrite(red_led, HIGH);
        }
    }
}
