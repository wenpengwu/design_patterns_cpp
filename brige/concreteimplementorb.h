#ifndef CONCRETEIMPLEMENTORB_H
#define CONCRETEIMPLEMENTORB_H

#include "implementor.h"
class ConcreteImplementorB : public Implementor
{

public:
    ConcreteImplementorB();
    virtual ~ConcreteImplementorB();

    virtual void operationImp();

};

#endif // CONCRETEIMPLEMENTORB_H
