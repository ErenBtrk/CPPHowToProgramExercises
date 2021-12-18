// Fig. 10.15: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h" // Complex class definition
#include <math.h>

using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart ) : real( realPart ),imaginary( imaginaryPart ){
    // empty body
} // end Complex constructor

// addition operator
 Complex Complex::operator+( const Complex &operand2 ) const{
     return Complex( real + operand2.real,
     imaginary + operand2.imaginary );
} // end function operator+

 // subtraction operator
 Complex Complex::operator-( const Complex &operand2 ) const{
     return Complex( real - operand2.real,
     imaginary - operand2.imaginary );
 } // end function operator-

 // display a Complex object in the form: (a, b)
 void Complex::print() const{
    cout << '(' << real << ", " << imaginary << ')';
 } // end function print

std::ostream& operator<<(std::ostream &output,const Complex &c){
    output << '(' << c.real << ", " << c.imaginary << ')';
    return output;
}

std::istream& operator>>(std::istream &input,Complex &c){
    input >> c.real >> c.imaginary;
    return input;
}

Complex Complex::operator*(const Complex &c)const{
    return Complex( ( this->real * c. real ) - ( this->imaginary * c.imaginary ) ,
                                ( this ->imaginary * c.real) + ( this-> real * c.imaginary) ) ;
}

bool Complex::operator==(const Complex &c)const{
    if( this->real != c.real || this->imaginary != c.imaginary){
        return false;
    }
    else{
        return true;
    }
}

