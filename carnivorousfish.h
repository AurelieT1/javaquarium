#ifndef CARNIVOROUSFISH_H
#define CARNIVOROUSFISH_H

#include "fish.h"
#include <memory>

class CarnivorousFish : public Fish {
public:
    CarnivorousFish(const std::string &n, const Gender &g) : Fish(n, g){}
    ~CarnivorousFish() = 0;

    void eat(std::unique_ptr<Fish>);    
};

class Merou : public CarnivorousFish {
public:
    Merou(const std::string &n, const Gender &g) : CarnivorousFish(n, g){}
};

class Tuna : public CarnivorousFish {
public:
    Tuna(const std::string &n, const Gender &g) : CarnivorousFish(n, g){}
};

class ClownFish : public CarnivorousFish {
public:
    ClownFish(const std::string &n, const Gender &g) : CarnivorousFish(n, g){}
};

#endif // CARNIVOROUSFISH_H
