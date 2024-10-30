#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class  Decorator: public Component
{
public:
    Decorator(Component* pcmp);
    virtual ~Decorator();

    void operation();

private:
    Component * m_pComponent;

};

#endif // DECORATOR_H
