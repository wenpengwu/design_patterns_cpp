#ifndef FT_CONCRETEFACTORY_H
#define FT_CONCRETEFACTORY_H
#include "ft_factory.h"
#include "ft_product.h"
namespace ft {

class ConcreteFactory : public Factory
{

public:
    ConcreteFactory();
    virtual ~ConcreteFactory();

    virtual Product* factoryMethod();
};
}

#endif // FT_CONCRETEFACTORY_H
