// Fig. 10.16: fig10_16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    Complex x;
    Complex y( 4.3, 8.2 );
    Complex z( 3.3, 1.1 );

     cout << "x: ";
     cout << x;
     cout << "\ny: ";
     cout << y;
     cout << "\nz: ";
     cout << z;

     x = y + z;
     cout << "\n\nx = y + z:" << endl;
     cout << x;
     cout << " = ";
     cout << y;
     cout << " + ";
     cout << z;

     x = y - z;
     cout << "\n\nx = y - z:" << endl;
     cout << x;
     cout << " = ";
     cout << y;
     cout << " - ";
     cout << z;
     cout << endl;

     x= y * z;
     cout << "\n\nx = y * z:" << endl;
     cout << x;
     cout << " = ";
     cout << y;
     cout << " * ";
     cout << z;
     cout << endl;


    Complex c1(1.1,9.9);
    cout << "c1 : " << endl;
    cout << c1 << endl;
    Complex c2(1.1,97.9);
    cout << "c2 : " << endl;
    cout << c2 << endl;

    if(c1 == c2){
        cout << "c1 is equal to c2." << endl;
    }
    else{
        cout << "c1 is not equal to c2." << endl;
    }
     if(c1 != c2){
        cout << "c1 is not equal to c2." << endl;
    }
    else{
        cout << "c1 is equal to c2." << endl;
    }


 } // end main
