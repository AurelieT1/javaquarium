#include <iostream>
#include <typeinfo>
#include "fish.h"

void Fish::displayFish(){
    std::cout << this->name << " is a " << (this->gender == MALE ? "male " : "female ");
    std::string species = typeid(*this).name();
    species.erase(species.begin(), ++species.begin());
    std::cout << species << " with " << healthPoints << " health point"
              << (healthPoints == 1 ? "" : "s") << std::endl;
}

void Fish::addHealthPoints(unsigned i) {
    healthPoints += i;
}

void Fish::removeHealthPoints(unsigned i) {
    if (i > healthPoints)
        healthPoints = 0;
    else
        healthPoints -= i;
}

Fish::~Fish() {}
