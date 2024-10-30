#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H
#include "builder.h"
class ConcreteBuilder : public Builder
{

public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();

};

#endif // CONCRETEBUILDER_H
