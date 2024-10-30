#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "mediator.h"
#include <string>


class Colleague
{

public:
    Colleague();
    virtual ~Colleague();

    virtual void receivemsg(std::string str);
    virtual void sendmsg(int toWho,std::string str);
    void setMediator(Mediator * aMediator);
protected:
    Mediator * m_pMediator;

};

#endif // COLLEAGUE_H
