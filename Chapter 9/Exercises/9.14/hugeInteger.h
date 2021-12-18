#ifndef HUGEINTEGER_H_INCLUDED
#define HUGEINTEGER_H_INCLUDED
#include <iostream>


class HugeInteger{
public:
        explicit HugeInteger(const std::string &str = std::string("0"));
        HugeInteger(const HugeInteger &);
    // I/O. Make your life easy now and require a stream to operate over as argument
        void input( const std::string & );
        std::string  output( )const;

    // Addition
        HugeInteger& add( const HugeInteger & );
        HugeInteger& subtract( const HugeInteger & );
        HugeInteger& multiply(const HugeInteger & );
        HugeInteger& divide(const HugeInteger & );
        HugeInteger& modulus(const HugeInteger& );
        bool isAbsoluteNotLessThan(const HugeInteger &)const;
        HugeInteger& absoluteAdd(const HugeInteger & );
        const HugeInteger absolute()const;

     // Comparisons
        bool isEqualTo( const HugeInteger&  ) const;
        bool isNotEqualTo( const HugeInteger&  ) const;
        bool isGreaterThan( const HugeInteger&  ) const;
        bool isLessThan( const HugeInteger&  ) const;
        bool isGreaterThanOrEqualTo( const HugeInteger&  ) const;
        bool isLessThanOrEqualTo( const HugeInteger&  ) const;

        // Additional predicate
        bool isZero() const;



private:
    static const size_t arraySize = 40;
    char digits[arraySize];
    char sign;
    bool negative;

};


#endif // HUGEINTEGER_H_INCLUDED
