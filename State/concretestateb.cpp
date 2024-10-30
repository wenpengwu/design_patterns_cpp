#include "concretestateb.h"
#include "concretestatea.h"
#include "context.h"

#include <iostream>
using namespace std;

State * ConcreteStateB::m_pState = nullptr;
ConcreteStateB::ConcreteStateB(){

}

State * ConcreteStateB::Instance()
{
    if ( nullptr == m_pState)
    {
        m_pState = new ConcreteStateB();
    }
    return m_pState;
}

ConcreteStateB::~ConcreteStateB(){

}

void ConcreteStateB::handle(Context * c){
    cout << "doing something in State B.\n done,change state to A" << endl;
    c->changeState(ConcreteStateA::Instance());
}
