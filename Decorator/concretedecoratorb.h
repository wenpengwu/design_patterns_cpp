#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H
#include "decorator.h"
class ConcreteDecoratorB : public Decorator
{

public:
    ConcreteDecoratorB(Component* pcmp);
    virtual ~ConcreteDecoratorB();

    void addBehavior();
    virtual void operation();

};
#endif // CONCRETEDECORATORB_H
