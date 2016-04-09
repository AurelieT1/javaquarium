#ifndef FISH_H
#define FISH_H

#include <string>

enum Gender {MALE, FEMALE};

class Fish {
public:
    Fish(const std::string &n, const Gender &g) :
            name(n), gender(g) { }
    Fish(const Fish&) = delete;             //no copy
    Fish &operator=(const Fish&) = delete;  //no assignment
    virtual ~Fish() = 0;

    std::string getName() const { return name; }
    Gender getGender() const { return gender; }
    unsigned getHealthPoints() const { return healthPoints; }

    void addHealthPoints(unsigned i);
    void removeHealthPoints(unsigned i);

    void displayFish();

private:
   std::string name;
   Gender gender;
   unsigned healthPoints = 10;
};


#endif // FISH_H
