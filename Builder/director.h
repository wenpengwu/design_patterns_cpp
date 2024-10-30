#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"
class Director
{

public:
    Director();
    virtual ~Director();
    Builder *m_Builder;

    Product* constuct();
    void setBuilder(Builder* buider);

private:
    Builder * m_pbuilder;

};
#endif // DIRECTOR_H
