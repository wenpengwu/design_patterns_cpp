#ifndef INVOKER_H
#define INVOKER_H
#include "command.h"
class Invoker
{
public:
    Invoker(Command* cmd);

    virtual ~Invoker();

    void call();

private:
    Command* m_pCommand;
};

#endif // INVOKER_H
