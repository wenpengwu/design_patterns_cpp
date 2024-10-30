#ifndef CONCRETECOLLEAGUEA_H
#define CONCRETECOLLEAGUEA_H

#include "colleague.h"

class ConcreteColleagueA : public Colleague
{

public:
    ConcreteColleagueA();
    virtual ~ConcreteColleagueA();

    virtual void sendmsg(int toWho,std::string str);
    virtual void receivemsg(std::string str);

};

#endif // CONCRETECOLLEAGUEA_H
