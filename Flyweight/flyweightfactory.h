#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include "flyweight.h"
#include<string>
#include <map>
class FlyweightFactory
{

public:
    FlyweightFactory();
    virtual ~FlyweightFactory();

    Flyweight*  getFlyweight(std::string str);

private:
    std::map<std::string,Flyweight*> m_mpFlyweight;

};

#endif // FLYWEIGHTFACTORY_H
