#ifndef SIMON_CLASS_H
#define SIMON_CLASS_H

class Nail
{
private:
    int pin;
    int answerTab[9];
    int finalResult = 0;
    int numTab;

public:
    int pinDef(int defPin, int numDif);
    int inputPin();
    int outputPin();
    int readPin(int winCode);

};

#endif