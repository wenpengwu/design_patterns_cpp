#ifndef SIMPLEF_CONCRETEPRODUCTA_H
#define SIMPLEF_CONCRETEPRODUCTA_H
#include "simplef_product.h"

namespace simple_f {
class ConcreteProductA : public Product
{

public:
    ConcreteProductA();
    virtual ~ConcreteProductA();

    virtual void Use();

};
}

#endif // SIMPLEF_CONCRETEPRODUCTA_H
