#include "wire.h"   

int difficulty = 1;
int validation = 0;

Nail alpha;
Nail beta;
Nail gamma;
Nail delta;
Nail epsilon;
Nail zeta;
Nail eta;
Nail theta;
Nail iota;
Nail kappa;

void setup()
{
    //parametre(difficulty);

    alpha.pinDef(8);
    beta.pinDef(2);
    gamma.pinDef(6);
    delta.pinDef(10);
    epsilon.pinDef(3);
    zeta.pinDef(7);
    eta.pinDef(11);
    theta.pinDef(9);
    iota.pinDef(5);
    kappa.pinDef(4);
}
void loop(){
    
}
/*
int testPin(int pin, int oppin)
{

    pinMode(oppin, OUTPUT);
    Serial.println("OUTPUT = ");
    Serial.print(oppin);

    digitalWrite(pin, HIGH);

    if (digitalRead == true)
    {
        winTab[validation] = pin
            verifEnd(validation);

        validation++;
    }
    else
    {
        Serial.println("waiting...");
    }
}*/