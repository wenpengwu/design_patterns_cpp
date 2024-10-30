#ifndef SIMPLEF_FACTORY_H
#define SIMPLEF_FACTORY_H

#include "simplef_product.h"
#include <string>
namespace simple_f {
class Factory
{

public:
    Factory();
    virtual ~Factory();

    static Product * createProduct(std::string proname);

};
}

#endif // SIMPLEF_FACTORY_H
