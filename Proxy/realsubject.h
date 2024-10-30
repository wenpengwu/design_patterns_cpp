#ifndef REALSUBJECT_H
#define REALSUBJECT_H
#include "proxy_subject.h"
namespace  proxy {
class RealSubject : public Subject
{

public:
    RealSubject();
    virtual ~RealSubject();

    void request();

};
}

#endif // REALSUBJECT_H
