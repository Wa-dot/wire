#ifndef WIRE_H
#define WIRE_H

class Nail
{
private:
    int pin;
    int opin;
    int ipin;

public:
    int pinDef(int defPin);
    int pinOutput();
    int pinInput();
};

/*
class difficulty
{
    private:
    int winTab[]
    int good;

    public:
    int parametre(int dif);
    int answers();
}*/
#endif