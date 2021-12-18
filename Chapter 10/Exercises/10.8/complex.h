// Fig. 10.14: Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
 {
     friend std::ostream& operator<<(std::ostream &,const Complex &);
     friend std::istream& operator>>(std::istream &,Complex &);
 public:
     explicit Complex( double = 0.0, double = 0.0 ); // constructor
     Complex operator+( const Complex & ) const; // addition
     Complex operator-( const Complex & ) const; // subtraction
     Complex operator*( const Complex & ) const; // multiplication
     bool operator==(const Complex &) const; // equality operator
     bool operator!=(const Complex &c)const { // inequality operator
        return !( *this == c );
     }
     void print() const; // output
 private:
     double real; // real part
     double imaginary; // imaginary part
 }; // end class Complex

#endif
