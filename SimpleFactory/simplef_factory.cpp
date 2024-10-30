#include "simplef_factory.h"
#include "simplef_concreteproducta.h"
#include "simplef_concreteproductb.h"

namespace simple_f {
using namespace  std;
Factory::Factory(){

}



Factory::~Factory(){

}


Product* Factory::createProduct(string proname){
    if ( "A" == proname )
    {
        return new ConcreteProductA();
    }
    else if("B" == proname)
    {
        return new ConcreteProductB();
    }
    return  NULL;
}
}
