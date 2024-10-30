#include "adapter.h"

Adapter::Adapter(Adaptee *adaptee):m_pAdaptee(adaptee) {}

Adapter::~Adapter(){
    delete m_pAdaptee;
}

void Adapter::request()
{
    m_pAdaptee->specificRequest();
}
