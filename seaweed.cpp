#include "seaweed.h"

void Seaweed::addHealthPoints(unsigned i) {
    healthPoints += i;
}

void Seaweed::removeHealthPoints(unsigned i) {
    if (i > healthPoints)
        healthPoints = 0;
    else
        healthPoints -= i;
}
