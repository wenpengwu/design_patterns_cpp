#ifndef UNSHAREDCONCRETEFLYWEIGHT_H
#define UNSHAREDCONCRETEFLYWEIGHT_H

#include "flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{

public:
    UnsharedConcreteFlyweight();
    virtual ~UnsharedConcreteFlyweight();

    void operation();

private:
    int allState;

};

#endif // UNSHAREDCONCRETEFLYWEIGHT_H
