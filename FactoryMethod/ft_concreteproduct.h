#ifndef FT_CONCRETEPRODUCT_H
#define FT_CONCRETEPRODUCT_H

#include "ft_product.h"
namespace ft {

class ConcreteProduct : public Product
{

public:
    ConcreteProduct();
    virtual ~ConcreteProduct();

    virtual void use();

};
}

#endif // FT_CONCRETEPRODUCT_H
