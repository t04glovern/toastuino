#include <Arduino.h>

const byte pinCount = 8;
const byte ledPins[pinCount] = {4, 5, 6, 7, 8, 9, 10, 11};

const int buttonPin = 3;
const int speedPin = 2;

int lightSpeed = 1; // Value * 100 = delay

int led = 1;

int prevUp = HIGH;

void setup()
{
    pinMode(buttonPin, INPUT);
} // end of setup

void turnOnLED(const byte which, const byte brightness)
{
    for (byte i = 0; i < pinCount; i++)
        analogWrite(ledPins[i], 0);

    if (which > 1)
        analogWrite(ledPins[which - 2], brightness); // make "which" zero-relative
} // end of turnOnLED

void loop()
{
    if (led > pinCount + 1)
        led = 1;

    turnOnLED(led++, 255);

    int sensorValue = analogRead(A0);
    lightSpeed = map(sensorValue, 0, 1024, 8, 1);
    delay(lightSpeed * 100);

} // end of loop