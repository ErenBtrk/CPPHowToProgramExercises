#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED
#include <iostream>

class Rational{
    friend std::ostream& operator<<( std::ostream& , const Rational &);
public:
    Rational(int n = 1 , int d = 1);
    void setNumerator(int);
    void setDenominator(int);
    unsigned int gcd(int , int)const;
    void reduce();
    Rational addition(Rational &);
    Rational subtraction(Rational &);
    Rational multiplication(Rational &);
    Rational division(Rational &);
    void display()const;

    Rational operator+(const Rational &) const;
    Rational operator-(const Rational &)const;
    Rational operator*(const Rational &)const;
    Rational operator/(const Rational &)const;
    bool operator>(const Rational &)const;
    bool operator<(const Rational &)const;
    bool operator!=(const Rational &r)const{
        return !( *this == r );
    }
    bool operator==(const Rational &)const;
private:
    int numerator;
    int denominator;


};




#endif // RATIONAL_H_INCLUDED
