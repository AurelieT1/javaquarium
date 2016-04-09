#include <iostream>
#include "aquarium.h"
#include "fish.h"
#include "carnivorousfish.h"
#include "herbivorousfish.h"

int main(){
    Aquarium aquarium;
    aquarium.addFish(Merou("Dori", FEMALE));
    aquarium.addFish(ClownFish("Nemo", MALE));
    aquarium.addSeaweed();
    aquarium.passTime();

    return 0;
}
