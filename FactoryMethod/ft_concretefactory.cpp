#include "ft_concretefactory.h"
#include "ft_concreteproduct.h"
namespace ft {

ConcreteFactory::ConcreteFactory(){

}


ConcreteFactory::~ConcreteFactory(){

}

Product* ConcreteFactory::factoryMethod(){

    return  new ConcreteProduct();
}

}
