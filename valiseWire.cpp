#include "simonClass.h"
#include <Arduino.h>
//**************************************************************************
int Nail::pinDef(int defPin, int numDif)
{
    pin = defPin;
    numTab = numDif;
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

int Nail::readPin(int winCode)
{
    if (digitalRead(pin) == 1) //On regarde si les pings sont connectés
    {
        answerTab[winCode] = 1;           //Si c'est le cas, on met 1 dans la case attitrée
        for (int i = 0; i <= numTab; i++) //On vérifie toutes les cases
        {
            if (answerTab[i] == 1) //Si les pings sont connectée
            {
                finalResult++;                 //on stock dans une variable
                Serial.print(finalResult);
                Serial.println(" pins sont connectés");
            }
        }
    }
    else
    { //Sinon on réinitialise tout.
        for (int w = 0; w <= numTab; w++)
            answerTab[w] = 0;
        finalResult = 0;
        Serial.println("Reinitialisation answer");
    }
}