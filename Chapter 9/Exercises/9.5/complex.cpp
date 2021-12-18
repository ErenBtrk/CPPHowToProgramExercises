#include "complex.h"
#include <iostream>
#include <math.h>

Complex::Complex(double r,double i){
    setR(r);
    setI(i);
}
Complex::~Complex(){}


void Complex::setR(double r){
    real = r;
}

void Complex::setI(double i){
    imaginary = i;
}

Complex Complex::addition(Complex &c){
    Complex newC;
    newC.imaginary = (this->imaginary + c.imaginary) ;
    newC.real = this->real + c.real;
    return newC;
}

Complex Complex::subtract(Complex &c){
    Complex newC;
    newC.imaginary = (this->imaginary - c.imaginary) ;
    newC.real = this->real - c.real;
    return newC;

}

void Complex::displayNumber()const{
    std::cout << "(" << real << "," << imaginary << "i)" << std::endl;
}
