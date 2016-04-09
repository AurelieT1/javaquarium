#ifndef SEAWEED_H
#define SEAWEED_H


class Seaweed {
public:
    void addHealthPoints(unsigned i);
    void removeHealthPoints(unsigned i);

    unsigned getHealthPoints() const { return healthPoints; }

private:
    unsigned healthPoints = 10;
};

#endif // SEAWEED_H
