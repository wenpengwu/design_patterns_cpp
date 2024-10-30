#ifndef CONCRETECOLLEAGUEB_H
#define CONCRETECOLLEAGUEB_H
#include "colleague.h"
class ConcreteColleagueB : public Colleague
{

public:
    ConcreteColleagueB();
    virtual ~ConcreteColleagueB();

    virtual void sendmsg(int toWho,std::string str);
    virtual void receivemsg(std::string str);
};

#endif // CONCRETECOLLEAGUEB_H
