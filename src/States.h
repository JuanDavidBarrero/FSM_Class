#ifndef STATES_H
#define STATES_H

#include "System.h"

class System;

class States
{

public:
    virtual void entry(System *s) = 0;
    virtual void exit(System *s) = 0;
    virtual void A(System *s){};
    virtual void B(System *s){};
};

#endif