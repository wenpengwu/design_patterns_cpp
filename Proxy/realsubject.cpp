#include "realsubject.h"
#include <iostream>
namespace proxy {

using namespace std;
RealSubject::RealSubject(){

}

RealSubject::~RealSubject(){

}

void RealSubject::request(){
    cout << "RealSubject::request" << endl;
}
}
