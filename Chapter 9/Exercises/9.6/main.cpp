#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    Rational r1(1,10);
    r1.display();
    Rational r2(2,10);
    r2.display();
    Rational r3;
    r3 = r1.addition(r2);
    r3.display();

    return 0;
}
