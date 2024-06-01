#ifndef VECTOR_H
    #define VECTOR_H



using VersorType = int64_t;



#include "Type_x.h"
#include "Type_y.h"
#include "Type_z.h"



class Vector
{
public:

    Vector(VersorType xValue = 0,
           VersorType yValue = 0,
           VersorType zValue = 0)
           :
           x{x_.value},
           y{y_.value},
           z{z_.value}
    {
        x = xValue;
        y = yValue;
        z = zValue;
    }



    VersorType
        &x,
        &y,
        &z;

private:

    Type_x
        x_;

    Type_y
        y_;

    Type_z
        z_;
};



#include "Vector Operators.h"



#endif // VECTOR_H
