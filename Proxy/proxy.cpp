#include "proxy.h"

#include <iostream>
using namespace std;

namespace proxy {

Proxy::Proxy(){
    //有人觉得 RealSubject对象的创建应该是在main中实现；我认为RealSubject应该
    //对用户是透明的，用户所面对的接口都是通过代理的；这样才是真正的代理；
    m_pRealSubject = new RealSubject();
}

Proxy::~Proxy(){
    delete m_pRealSubject;
}

void Proxy::afterRequest(){
    cout << "Proxy::afterRequest" << endl;
}


void Proxy::preRequest(){
    cout << "Proxy::preRequest" << endl;
}


void Proxy::request(){
    preRequest();
    m_pRealSubject->request();
    afterRequest();
}
}

