#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "decorator.h"

class ConcreteDecoratorA : public Decorator
{

public:
    ConcreteDecoratorA(Component* pcmp);
    virtual ~ConcreteDecoratorA();

    void addBehavior();
    virtual void operation();

};

#endif // CONCRETEDECORATORA_H
