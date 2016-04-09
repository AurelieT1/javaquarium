#ifndef HERBIVOROUSFISH_H
#define HERBIVOROUSFISH_H

#include "fish.h"
#include "seaweed.h"

class HerbivorousFish : public Fish {
public:
    HerbivorousFish(const std::string &n, const Gender &g) : Fish(n, g){}
    ~HerbivorousFish() = 0;

    virtual void eat(Seaweed);
};

class Sole : public HerbivorousFish {
public:
    Sole(const std::string &n, const Gender &g) : HerbivorousFish(n, g){}
};

class Bass : public HerbivorousFish {
public:
    Bass(const std::string &n, const Gender &g) : HerbivorousFish(n, g){}
};

class Carp : public HerbivorousFish {
public:
    Carp(const std::string &n, const Gender &g) : HerbivorousFish(n, g){}
};

#endif // HERBIVOROUSFISH_H
