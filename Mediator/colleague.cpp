#include "colleague.h"
#include "mediator.h"
#include <iostream>
using namespace std;

Colleague::Colleague(){

}



Colleague::~Colleague(){

}

void Colleague::receivemsg(string str){
    cout << "reveivemsg:" << str <<endl;
}


void Colleague::sendmsg(int toWho,string str){

}


void Colleague::setMediator(Mediator * aMediator){
    m_pMediator = aMediator;
}
