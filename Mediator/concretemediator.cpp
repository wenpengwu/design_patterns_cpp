#include "concretemediator.h"
#include "colleague.h"
#include <iostream>
using namespace std;

ConcreteMediator::ConcreteMediator(){

}

ConcreteMediator::~ConcreteMediator(){

}

void ConcreteMediator::operation(int nWho,string str){
    map<int,Colleague*>::const_iterator itr = m_mpColleague.find(nWho);
    if(itr == m_mpColleague.end())
    {
        cout << "not found this colleague!" << endl;
        return;
    }

    Colleague* pc = itr->second;
    pc->receivemsg(str);
}


void ConcreteMediator::registered(int nWho,Colleague * aColleague){
    map<int,Colleague*>::const_iterator itr = m_mpColleague.find(nWho);
    if(itr == m_mpColleague.end())
    {
        m_mpColleague.insert(make_pair(nWho,aColleague));
        //同时将中介类暴露给colleague
        aColleague->setMediator(this);
    }
}
