#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

class Product
{

public:
    Product();
    virtual ~Product();

    void setA(std::string str);
    void setB(std::string str);
    void setC(std::string str);
    void show();
private:
    std::string m_a;
    std::string m_b;
    std::string m_c;
};

#endif // PRODUCT_H
