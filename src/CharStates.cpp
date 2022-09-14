#include "CharStaes.h"

Start& Start::getInstance(){
    static Start singleton;
    return singleton;
}

void Start::A(System *s){
    s->setState(Dos::getInstance());
}

void Start::B(System *s){
    s->setText("Evento de start cuando presiono B");
}

void Start::entry(System *s){
    s->setText("Start entry");
}

void Start::exit(System *s){
    s->setText("Start exit");
}

//  ---------------------------------------

Dos& Dos::getInstance(){
    static Dos singleton;
    return singleton;
}

void Dos::B(System *s){
    s->setState(Start::getInstance());
}

void Dos::A(System *s){
    s->setState(Tres::getInstance());
}

void Dos::entry(System *s){
    s->setText("Dos entry");
}

void Dos::exit(System *s){
    s->setText("Dos exit");
}

//  ---------------------------------------

Tres& Tres::getInstance(){
    static Tres singleton;
    return singleton;
}

void Tres::A(System *s){
    s->setState(Start::getInstance());
}

void Tres::B(System *s){
    s->setState(Dos::getInstance());
}

void Tres::entry(System *s){
    s->setText("Tres entry");
}

void Tres::exit(System *s){
    s->setText("Tres exit");
}

//  ---------------------------------------