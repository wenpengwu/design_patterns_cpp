#include "builder.h"

Builder::Builder():m_prod(new Product()) {}


Builder::~Builder(){
    delete m_prod;
}


void Builder::buildPartA(){

}


void Builder::buildPartB(){

}


void Builder::buildPartC(){

}


Product* Builder::getResult(){
    return m_prod;
}
