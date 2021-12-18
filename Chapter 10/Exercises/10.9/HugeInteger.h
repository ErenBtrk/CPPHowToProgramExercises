// Fig. 10.17: Hugeint.h
// HugeInt class definition.
#ifndef HUGEINT_H
#define HUGEINT_H

#include <array>
#include <iostream>
#include <string>

 class HugeInt
 {
    friend std::ostream &operator<<( std::ostream &, const HugeInt & );
 public:
    static const int digits = 30; // maximum digits in a HugeInt

     HugeInt( long = 0 ); // conversion/default constructor
     HugeInt( const std::string & ); // conversion constructor

     // addition operator; HugeInt + HugeInt
     HugeInt operator+( const HugeInt & ) const;

     // addition operator; HugeInt + int
     HugeInt operator+( int ) const;

     // addition operator;
     // HugeInt + string that represents large integer value
     HugeInt operator+( const std::string & ) const;

     // multiplication operator HugeInt * HugeInt
     HugeInt operator*( const HugeInt & ) const;

     //multiplication operator HugeInt * int
     HugeInt operator*( int ) const;

     //multiplication operator HugeInt * string
     HugeInt operator*( const std::string & )const;

     // division operator HugeInt * HugeInt
     HugeInt operator/( const HugeInt & ) const;

     //division operator HugeInt * int
     HugeInt operator/( int ) const;

     //division operator HugeInt * string
     HugeInt operator/( const std::string & )const;

     bool operator>(const HugeInt & )const;
     bool operator<(const HugeInt & )const;

     bool operator==(const HugeInt &)const;
     bool operator!=(const HugeInt &hi)const{
        return !( *this == hi );
     }

 private:
    std::array< short, digits > integer;
 }; // end class HugetInt

#endif
