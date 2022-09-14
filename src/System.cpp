#include "System.h"

System::System(){
    currentState = &Start::getInstance();
    currentState->entry(this);
}

void System::setText(String txt){
    text = txt;
    Serial.println(text);
}

void System::setState(States &newState){
    currentState->exit(this);
    currentState = &newState;
    currentState->entry(this);
}

void System::A(){
    currentState->A(this);
}

void System::B(){
    currentState->B(this);
}