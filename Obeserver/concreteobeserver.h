#ifndef CONCRETEOBESERVER_H
#define CONCRETEOBESERVER_H
#include "obeserver.h"
#include <string>
class ConcreteObeserver : public Obeserver
{

public:
    ConcreteObeserver(std::string name);
    virtual ~ConcreteObeserver();
    virtual void update(Subject * sub);

private:
    std::string m_objName;
    int m_obeserverState;
};
#endif // CONCRETEOBESERVER_H
