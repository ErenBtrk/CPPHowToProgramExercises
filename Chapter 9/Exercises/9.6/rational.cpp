#include "rational.h"
#include <iostream>




Rational::Rational(int n,int d){
    int greatestCommonDivisor = gcd(n,d);
    setNumerator(n / greatestCommonDivisor);
    setDenominator(d / greatestCommonDivisor);
}



void Rational::setNumerator(int n){
    numerator = n;
}

void Rational::setDenominator(int d){
    denominator = d;
}

int Rational::gcd(int n , int d){
    if( n < 0 ){
        n *= -1;
    }
    if( d < 0 ){
        d *= -1;
    }
    if( n == d ){
        return n;
    }
    else if( n > d ){
         return gcd( n - d , d );
    }
    else{
        return gcd ( n , d - n );
    }
}

Rational Rational::addition(Rational &r){
    Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) + (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) + (r.numerator * this->denominator);
    }

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::subtraction(Rational &r){
    Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) - (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) - (r.numerator * this->denominator);
    }
    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;

}

Rational Rational::multiplication(Rational &r){
    Rational result;
    result.numerator = (this->numerator) * (r.numerator);
    result.denominator = (this->denominator) * (r.denominator);

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::division(Rational &r){
    Rational result;
    result.numerator = (this->numerator) * (r.denominator);
    result.denominator = (this->denominator) * (r.numerator);

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

void Rational::display()const{
    std::cout << numerator << "/" << denominator << std::endl;
}
