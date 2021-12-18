#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED
#include <iostream>
#include <vector>




class Poly{
    friend std::ostream& operator<<( std::ostream& , const Poly &);
public:
    Poly();
    ~Poly();
    void polyAppend( int , int );
    void sortPoly();
    const Poly operator=( const Poly &);
    Poly operator+( const Poly &)const;
    Poly operator-( const Poly &)const;
    Poly operator*( const Poly &)const;
    Poly operator/( const Poly &)const;
    const Poly operator+=(const Poly &);
    const Poly operator-=(const Poly &);
    const Poly operator*=(const Poly &);
    size_t getNoOfTerms()const;

private:
     size_t  noOfTerms;

    struct term{
        int coeff ;
        int exp ;
    };

    std::vector < term > termVector = std::vector <  term > (0);



};


#endif // POLY_H_INCLUDED
