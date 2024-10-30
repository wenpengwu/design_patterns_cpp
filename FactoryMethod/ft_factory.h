#ifndef FT_FACTORY_H
#define FT_FACTORY_H
#include "ft_product.h"

namespace  ft {
class Factory
{

public:
    Factory();
    virtual ~Factory();

    virtual Product* factoryMethod();

};

}
#endif // FT_FACTORY_H
