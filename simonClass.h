#ifndef SIMON_CLASS_H
#define SIMON_CLASS_H

class Nail
{
private:
    int pin;
    int answerTab[];
    

public:
    int pinDef(int defPin);
    int intpuPin();
    int outputPin();
    int readPin(int winCode);

};

#endif