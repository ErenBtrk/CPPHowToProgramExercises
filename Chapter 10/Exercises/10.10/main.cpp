#include <iostream>
#include "Rational.h"
#include <math.h>

using namespace std;

int main()
{
    Rational r1(-1,3);
    cout << "r1 = " << r1 << endl;
    Rational r2(-1,3);
    cout << "r2 = " << r2 << endl;
    Rational r3;
    r3 = r1 + r2 ;
    cout << r1 << " + " << r2 << " = " << r3 << endl;
    r3 = r1 - r2 ;
    cout << r1 << " - " << r2 << " = " << r3 << endl;
    r3 = r1 * r2 ;
    cout << r1 << " * " << r2 << " = " << r3 << endl;
    r3 = r1 / r2 ;
    cout << r1 << " / " << r2 << " = " << r3 << endl;
    if( r1 > r2 ){
        cout << "r1 is greater than r2." << endl;
    }
    else{
        cout << "r1 is not greater than r2." << endl;
    }
     if( r1 < r2 ){
        cout << "r1 is lower than r2." << endl;
    }
    else{
        cout << "r1 is not lower than r2." << endl;
    }
    if( r1 == r2 ){
        cout << "r1 is equal to r2." << endl;
    }
    else{
        cout << "r1 is not equal to r2." << endl;
    }
    if( r1 != r2 ){
        cout << "r1 is not equal to r2." << endl;
    }
    else{
        cout << "r1 is  equal to r2." << endl;
    }

    return 0;
}
