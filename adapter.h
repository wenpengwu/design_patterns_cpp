#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"
class Adapter : public Target
{

public:
    Adapter(Adaptee *adaptee);
    virtual ~Adapter();

    virtual void request();

private:
    Adaptee* m_pAdaptee;

};

#endif // ADAPTER_H
