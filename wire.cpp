#include "wire.h"
#include <Arduino.h>
/*
int nail::testPin(int ipin, int oppin)
{
}*/

int Nail::pinDef(int defPin);
{
    pin = defPin;
    Serial.print(pin);
    return pin;
    
}
int Nail::pinOutput()
{
    pinMode(pin, INPUT);
    opin = pin;
    Serial.println("Input = ");
    Serial.print(opin);
}

int Nail::pinInput()
{
    pinMode(pin, OUTPUT);
    ipin = pin;
    Serial.println("Output = ");
    Serial.print(ipin);
}

/*

int difficulty::parametre(int dif)
{
    switch (dif)
    {
    case 1:
        int winTab[0, 0, 0];
        int good = 2;
        return winTab, good;

    case 1:
        int winTab{0, 0, 0, 0};
        int good = 3;
        return winTab, good;

    case 3:
        int winTab{0, 0, 0, 0, 0, 0};
        int good = 5;
        return winTab, good;

    default:
        Serial.println("Error parametre difficulty");
        break;
    }
}*/