#include <iostream>
#include "adapter.h"
#include <map>
//-- Builder
#include "concreteimplementora.h"
#include "concreteimplementorb.h"
#include "refinedabstraction.h"
#include "abstraction.h"
#include "concretebuilder.h"
#include "director.h"
#include "product.h"

//-- command
#include "concretecommand.h"
#include "invoker.h"
#include "receiver.h"


//--decotrator
#include "concretecomponent.h"
#include "concretedecoratora.h"
#include "concretedecoratorb.h"
#include "component.h"

//--facade
#include "facade.h"


//--FactoryMethod

#include "ft_factory.h"
#include "ft_concretefactory.h"
#include "ft_product.h"

//--Flyweight
#include "flyweightfactory.h"
#include "flyweight.h"

//--Mediator
#include "concretecolleaguea.h"
#include "concretemediator.h"
#include "concretecolleagueb.h"

//--Obeserver
#include "subject.h"
#include "obeserver.h"
#include "concreteobeserver.h"
#include "concretesubject.h"

//--proxy
#include "realsubject.h"
#include "proxy.h"

//--SimpleFactory
#include "simplef_factory.h"

//--Singleton
#include "singleton.h"

//--State
#include "context.h"

//--Strategy
#include "strategy_context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Strategy.h"


using namespace std;
int main_brige()
{
    cout<<"-------------"<<endl;
    cout<<"main_brige"<<endl;
    Implementor * pImp = new ConcreteImplementorA();
    Abstraction * pa = new RefinedAbstraction(pImp);
    pa->operation();

    Abstraction * pb = new RefinedAbstraction(new ConcreteImplementorB());
    pb->operation();

    delete pa;
    delete pb;

    return 0;
}

int main_commad()
{
    cout<<"-------------"<<endl;
    cout<<"main_commad"<<endl;
    Receiver * pReceiver = new Receiver();
    ConcreteCommand * pCommand = new ConcreteCommand(pReceiver);
    Invoker * pInvoker = new Invoker(pCommand);
    pInvoker->call();

    delete pReceiver;
    delete pCommand;
    delete pInvoker;
    return 0;
}

void main_builder()
{
    cout<<"-------------"<<endl;
    cout<<"main_builder"<<endl;
    ConcreteBuilder * builder = new ConcreteBuilder();
    Director  director;
    director.setBuilder(builder);
    Product * pd =  director.constuct();
    pd->show();
    if(pd!=nullptr) delete pd;
    //if (builder!=nullptr) delete builder;

}

int main_decorator()
{
    cout<<"-------------"<<endl;
    cout<<"main_decorator"<<endl;
    ConcreteComponent * pRealProd = new ConcreteComponent();
    //动态增加行为
    Component * pA = new ConcreteDecoratorA(pRealProd);
    pA->operation();
    //继续动态增加行为
    Component * pB = new ConcreteDecoratorB(pA);
    pB->operation();

    delete pRealProd;
    delete pA;
    delete pB;
    return 0;
}


void main_Facade()
{
    cout<<"-------------"<<endl;
    cout<<"main_Facade"<<endl;
    Facade fa;
    fa.wrapOpration();

}


void main_FactoryMethod(){
    cout<<"-------------"<<endl;
    cout<<"main_FactoryMethod"<<endl;
    ft::Factory * fc = new ft::ConcreteFactory();
    ft::Product * prod = fc->factoryMethod();
    prod->use();

    delete fc;
    delete prod;

}

void main_Flyweight()
{
    cout<<"-------------"<<endl;
    cout<<"main_Flyweight"<<endl;
    FlyweightFactory factory;
    Flyweight * fw = factory.getFlyweight("one");
    fw->operation();

    Flyweight * fw2 = factory.getFlyweight("two");
    fw2->operation();
    //aready exist in pool
    Flyweight * fw3 = factory.getFlyweight("one");
    fw3->operation();

}

void main_adaptee(){
    cout<<"-------------"<<endl;
    cout<<"main_adaptee"<<endl;
    Adaptee * adaptee  = new Adaptee();
    Target * tar = new Adapter(adaptee);
    tar->request();
}

void main_Mediator()
{
    cout<<"-------------"<<endl;
    cout<<"main_Mediator"<<endl;
    ConcreteColleagueA * pa = new ConcreteColleagueA();
    ConcreteColleagueB * pb = new ConcreteColleagueB();
    ConcreteMediator * pm = new ConcreteMediator();
    pm->registered(1,pa);
    pm->registered(2,pb);

    // sendmsg from a to b
    pa->sendmsg(2,"hello,i am a");
    // sendmsg from b to a
    pb->sendmsg(1,"hello,i am b");

    delete pa,pb,pm;

}


void main_Obeserver()
{
    cout<<"-------------"<<endl;
    cout<<"main_Obeserver"<<endl;
    Subject * subject = new ConcreteSubject();
    Obeserver * objA = new ConcreteObeserver("A");
    Obeserver * objB = new ConcreteObeserver("B");
    subject->attach(objA);
    subject->attach(objB);

    subject->setState(1);
    subject->notify();


    subject->detach(objB);
    subject->setState(2);
    subject->notify();

    delete subject;
    delete objA;
    delete objB;

}

void main_Proxy()
{
    cout<<"-------------"<<endl;
    cout<<"main_Proxy"<<endl;
    proxy::Proxy proxy;
    proxy.request();

}


void main_SimpleFactory()
{
    cout<<"-------------"<<endl;
    cout<<"main_SimpleFactory"<<endl;
    simple_f::Product * prod = simple_f::Factory::createProduct("A");

    prod->Use();

    delete prod;

}

void main_Singleton()
{
    cout<<"-------------"<<endl;
    cout<<"main_Singleton"<<endl;
    Singleton * sg = Singleton::getInstance();
    sg->singletonOperation();

}

void main_State(){
    cout<<"-------------"<<endl;
    cout<<"main_State"<<endl;
    char a = '0';
    if('0' == a)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    Context * c = new Context();
    c->request();
    c->request();
    c->request();

    delete c;
}

void main_Strategy(){
    cout<<"-------------"<<endl;
    cout<<"main_Strategy"<<endl;
    Strategy * s1 = new ConcreteStrategyA();
    strategy::Context * cxt = new strategy::Context();
    cxt->setStrategy(s1);
    cxt->algorithm();

    Strategy *s2 = new ConcreteStrategyB();
    cxt->setStrategy(s2);
    cxt->algorithm();

    delete s1;
    delete s2;

    int rac1 = 0x1;
    int rac2 = 0x2;
    int rac3 = 0x4;
    int rac4 = 0x8;

    int i = 0xe;
    int j = 0x5;

    int r1 = i & rac1;
    int r2 = i & rac2;
    int r3 = i & rac3;
    int r4 = i & rac4;

    cout <<"res:" << r1 << "/" << r2 << "/" << r3 << "/" << r4 << endl;
}

int main()
{




    map<int,int> mp{
           {1,2}
    };

    for(const auto& [x,y]:mp){
        cout<<x<<","<<y<<endl;
    }
    //C++ 17新特性
    tuple<int,int,int>userInfo(1,2,3);
    cout<<get<0>(userInfo);
    main_adaptee();
    main_brige();
    main_builder();
    main_commad();
    main_decorator();
    main_Facade();
    main_FactoryMethod();
    main_Flyweight();
    main_Mediator();
    main_Obeserver();
    main_Proxy();
    main_SimpleFactory();
    main_Singleton();
    main_State();
    main_Strategy();
    cout<<"-------------"<<endl;
    cout<<"exit...."<<endl;
    return 0;
}
