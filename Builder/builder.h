#ifndef BUILDER_H
#define BUILDER_H
#include "product.h"
class Builder
{

public:
    Builder();
    virtual ~Builder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
    virtual Product * getResult();
protected :
    Product * m_prod;
};

#endif // BUILDER_H
