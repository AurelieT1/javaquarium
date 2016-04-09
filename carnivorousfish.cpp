#include "carnivorousfish.h"

void CarnivorousFish::eat(std::unique_ptr<Fish> u){
    u->removeHealthPoints(4);
    this->addHealthPoints(5);
}

CarnivorousFish::~CarnivorousFish() {}
