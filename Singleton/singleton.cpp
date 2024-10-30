#include "singleton.h"


#include <iostream>
using namespace std;

Singleton * Singleton::instance = NULL;
Singleton::Singleton(){

}

Singleton::~Singleton(){
    delete instance;
}

Singleton* Singleton::getInstance(){
    if (instance == NULL)
    {
        instance = new Singleton();
    }

    return  instance;
}


void Singleton::singletonOperation(){
    cout << "singletonOperation" << endl;
}
