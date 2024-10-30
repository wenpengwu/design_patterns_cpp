#ifndef PROXY_SUBJECT_H
#define PROXY_SUBJECT_H

namespace proxy {

class Subject
{

public:
    Subject();
    virtual ~Subject();

    virtual void request();

};

}

#endif // PROXY_SUBJECT_H
