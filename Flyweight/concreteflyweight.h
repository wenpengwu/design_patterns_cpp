#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H
#include "flyweight.h"
#include <string>
class ConcreteFlyweight : public Flyweight
{

public:
    ConcreteFlyweight(std::string str);
    virtual ~ConcreteFlyweight();

    virtual void operation();

private:
    std::string intrinsicState;

};

#endif // CONCRETEFLYWEIGHT_H
