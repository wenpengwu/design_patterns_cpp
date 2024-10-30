#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "mediator.h"
#include<map>

class ConcreteMediator : public Mediator
{

public:
    ConcreteMediator();
    virtual ~ConcreteMediator();

    virtual void operation(int nWho,std::string str);
    virtual void registered(int nWho, Colleague * aColleague);
private:
    std::map<int,Colleague*> m_mpColleague;
};

#endif // CONCRETEMEDIATOR_H
