#ifndef CHARSTATES_H
#define CHARSTATES_H

#include "States.h"

class System;

class Start : public States
{
private:
    Start() {};

public:
    void entry(System *s);
    void A(System *s);
    void B(System *s);
    void exit(System *s);
    static Start &getInstance();
};

class Dos : public States
{
private:
    Dos() {};

public:
    void entry(System *s);
    void B(System *s);
    void A(System *s);
    void exit(System *s);
    static Dos &getInstance();
};

class Tres : public States
{
private:
    Tres() {};

public:
    void entry(System *s);
    void A(System *s);
    void B(System *s);
    void exit(System *s);
    static Tres &getInstance();
};

#endif
