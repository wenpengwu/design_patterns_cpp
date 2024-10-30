#ifndef STRATEGY_CONTEXT_H
#define STRATEGY_CONTEXT_H
#include "strategy.h"

namespace strategy {
class Context
{

public:
    Context();
    virtual ~Context();


    void algorithm();
    void setStrategy(Strategy* st);

private:
    Strategy *m_pStrategy;

};
}

#endif // STRATEGY_CONTEXT_H
