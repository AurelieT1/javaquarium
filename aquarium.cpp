#include "aquarium.h"
#include <iostream>
#include <random>

void Aquarium::addSeaweed(){
    seaweeds.push_back(Seaweed());
}

void Aquarium::displayState(unsigned round){
    std::cout << "********************************************** \n"
              << std::string(19,' ') << "Round " << (round + 1)
              << "\n********************************************** \n" << std::endl;

    auto nbFishes = fishes.size();
    if (nbFishes == 0)
        std::cout << "There are no fishes in the aquarium" << std::endl;
    else if (nbFishes == 1)
        std::cout << "There is 1 fish in the aquarium" << std::endl;
    else
        std::cout << "There are " << nbFishes << " fishes in the aquarium" << std::endl;

    for (auto const &it : fishes){
        it->displayFish();
    }

    auto nbSeaweeds = seaweeds.size();
    if (nbSeaweeds == 0)
        std::cout << "There are no seaweeds in the aquarium" << std::endl;
    else if (nbSeaweeds == 1)
        std::cout << "There is 1 seaweed in the aquarium" << std::endl;
    else
        std::cout << "There are " << nbSeaweeds << " seaweeds in the aquarium" << std::endl;

        std::cout << std::endl;
}

void Aquarium::eating() {
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> u(0, seaweeds.size());
    for (unsigned fish = 0 ; fish < fishes.size() ; ++fish){

    //Work In Progress ...

    }
}

void Aquarium::updateState() {
    for (auto it = fishes.begin() ; it != fishes.end() ; ++it){
        (*it)->removeHealthPoints(1);
        if ((*it)->getHealthPoints() == 0){
            it = fishes.erase(it);
            --it;
        }
    }

    for (auto &it : seaweeds){
        it.addHealthPoints(1);
    }
}

void Aquarium::passTime(unsigned rounds){
    for (unsigned i = 0 ; i < rounds ; ++i){
        displayState(i);
        updateState();
    }
}
