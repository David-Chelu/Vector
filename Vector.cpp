#include <iostream>
#include "Code/Vector.h"



void Print(const Vector &v)
{
    std::cout << '{' << v.x << "; " << v.y << "; " << v.z << '}';
}



int main()
{
    Vector
        v{13, 100, 42};

    Print(((v -= 5x) -= 13z) += 21y);

    std::cin.get();

    return 0;
}
