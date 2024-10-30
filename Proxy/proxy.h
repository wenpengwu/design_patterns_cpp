#ifndef PROXY_H
#define PROXY_H
#include "proxy_subject.h"
#include "realsubject.h"

namespace proxy {
class Proxy : public Subject
{

public:
    Proxy();
    virtual ~Proxy();

    void request();

private:
    void afterRequest();
    void preRequest();
    RealSubject *m_pRealSubject;

};

}
#endif // PROXY_H
