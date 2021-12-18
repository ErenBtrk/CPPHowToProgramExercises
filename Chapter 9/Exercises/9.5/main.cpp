#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex c1(2,3);
    c1.displayNumber();
    Complex c2(4,5);
    c2.displayNumber();
    Complex c3;
    c3 = c1.subtract(c2);
    c3.displayNumber();
    Complex c4;
    c4.displayNumber();


    return 0;
}
