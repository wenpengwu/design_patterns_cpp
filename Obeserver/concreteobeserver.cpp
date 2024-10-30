#include "concreteobeserver.h"
#include <iostream>
#include "subject.h"
using namespace std;

ConcreteObeserver::ConcreteObeserver(string name){
    m_objName = name;
}

ConcreteObeserver::~ConcreteObeserver(){

}

void ConcreteObeserver::update(Subject * sub){
    m_obeserverState = sub->getState();
    cout << "update oberserver[" << m_objName << "] state:" << m_obeserverState << endl;
}
