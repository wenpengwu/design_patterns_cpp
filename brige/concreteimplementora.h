#ifndef CONCRETEIMPLEMENTORA_H
#define CONCRETEIMPLEMENTORA_H
#include "implementor.h"

class ConcreteImplementorA : public Implementor
{

public:
    ConcreteImplementorA();
    virtual ~ConcreteImplementorA();

    virtual void operationImp();

};
#endif // CONCRETEIMPLEMENTORA_H
