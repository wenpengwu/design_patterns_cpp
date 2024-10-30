#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>
// 注：由于两个类相互引用， 这里不能直接#include  Colleague头文件,而使用声明；
class Colleague;

class Mediator
{

public:
    Mediator();
    virtual ~Mediator();

    virtual void operation(int nWho,std::string str);
    virtual void registered(int nWho, Colleague * aColleague);

};

#endif // MEDIATOR_H
