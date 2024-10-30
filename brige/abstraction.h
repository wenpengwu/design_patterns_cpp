#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"
class Abstraction
{

public:
    Abstraction();
    virtual ~Abstraction();

    Abstraction(Implementor* imp);
    virtual void operation();

protected:
    Implementor* m_pImp;

};
#endif // ABSTRACTION_H
