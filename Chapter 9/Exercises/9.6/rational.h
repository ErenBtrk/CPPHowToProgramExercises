#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

class Rational{
public:
    Rational(int n = 1 , int d = 1);
    void setNumerator(int);
    void setDenominator(int);
    int gcd(int , int);
    Rational addition(Rational &);
    Rational subtraction(Rational &);
    Rational multiplication(Rational &);
    Rational division(Rational &);
    void display()const;
private:
    int numerator;
    int denominator;


};




#endif // RATIONAL_H_INCLUDED
