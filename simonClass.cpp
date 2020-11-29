#include "simonClass.h"
#include <Arduino.h>
//**************************************************************************
int Nail::pinDef(int defPin)
{
    pin = defPin;
    Serial.print(pin);
}

int Nail::inputPin()
{
    pinMode(pin, INPUT);
    Serial.print("Pin input : ");
    Serial.println(pin);
}

int Nail::outputPin()
{
    pinMode(pin, OUTPUT);
    Serial.print("Pin output : ");
    Serial.println(pin);
    digitalWrite(pin, HIGH);
}

int Nail::readPin(int winCode){
    if (digitalRead(pin) == 1)
    {
        answerTab[winCode] = 1;
        if 
    }
}