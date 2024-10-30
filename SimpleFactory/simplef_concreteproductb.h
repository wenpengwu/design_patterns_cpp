#ifndef SIMPLEF_CONCRETEPRODUCTB_H
#define SIMPLEF_CONCRETEPRODUCTB_H
#include "simplef_product.h"
namespace simple_f {
class ConcreteProductB : public Product
{

public:
    ConcreteProductB();
    virtual ~ConcreteProductB();

    virtual void Use();

};
}

#endif // SIMPLEF_CONCRETEPRODUCTB_H
