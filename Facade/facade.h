#ifndef FACADE_H
#define FACADE_H
#include "systema.h"
class Facade
{
public:
    Facade();
    virtual ~Facade();

    void wrapOpration();

private:
    SystemC *m_SystemC;
    SystemA *m_SystemA;
    SystemB *m_SystemB;
};

#endif // FACADE_H
