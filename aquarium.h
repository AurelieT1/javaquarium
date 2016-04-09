#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>
#include <vector>
#include <memory>
#include "fish.h"
#include "seaweed.h"

class Aquarium {
public:
    Aquarium() = default;

    template <typename T> void addFish(const T &fish){
        fishes.push_back(std::make_unique<T>(fish.getName(), fish.getGender()));
    }
    void addSeaweed();
    void displayState(unsigned round);
    void updateState();
    void passTime(unsigned rounds = 5);
    void eating();

private:
    std::vector<std::unique_ptr<Fish>> fishes;
    std::vector<Seaweed> seaweeds;
};

#endif // AQUARIUM_H
