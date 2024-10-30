#ifndef SUBJECT_H
#define SUBJECT_H
#include "obeserver.h"
#include <vector>
class Subject
{

public:
    Subject();
    virtual ~Subject();
    Obeserver *m_Obeserver;

    void attach(Obeserver * pObeserver);
    void detach(Obeserver * pObeserver);
    void notify();

    virtual int getState() = 0;
    virtual void setState(int i)= 0;

private:
    std::vector<Obeserver*> m_vtObj;

};
#endif // SUBJECT_H
