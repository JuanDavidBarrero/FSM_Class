#ifndef SYSTEM_H
#define SYSTEM_H

#include "Arduino.h"
#include "States.h"
#include "CharStaes.h"

class States;

class System
{
private:
    States *currentState;
    String text;

public:
    System();
    inline States *getCurrentState() const { return currentState; }
    void setState(States &newState);
    void setText(String);
    void A();
    void B();
};

#endif
