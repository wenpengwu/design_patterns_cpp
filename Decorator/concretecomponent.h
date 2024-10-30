#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "component.h"

class ConcreteComponent : public Component
{

public:
    ConcreteComponent();
    virtual ~ConcreteComponent();

    void operation();

};

#endif // CONCRETECOMPONENT_H
