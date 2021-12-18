#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
public:
    Complex(double r=0.0, double i = 0.0);
    ~Complex();
    void setR(double);
    void setI(double);
    Complex addition(Complex &);
    Complex subtract(Complex &);
    void displayNumber()const;

private:
    double real;
    double imaginary;


};

#endif // COMPLEX_H_INCLUDED
