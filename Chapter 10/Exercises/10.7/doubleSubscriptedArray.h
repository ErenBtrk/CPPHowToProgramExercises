#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>

class DoubleSubscriptedArray{
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray( size_t = 10  , size_t = 10 ); // default constructor
    DoubleSubscriptedArray( const DoubleSubscriptedArray & ); // copy constructor
    ~DoubleSubscriptedArray(); // destructor
    //setters
    void setSizeRow(int);
    void setSizeColumn(int);
    //getters
    size_t getSizeRow()const;
    size_t getSizeColumn()const;

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & ); //assignment operator
    bool operator==(const DoubleSubscriptedArray &)const; // equality operator
    bool operator!=(const DoubleSubscriptedArray &dsa)const{
        return ! ( * this == dsa ); // inequality operator; returns opposite of == operator
        /*Also, the full function definition for operator!= is in
        the Array header. This allows the compiler to inline the definition of operator!=. */
    }
    int &operator( )(size_t , size_t );
    int operator( )(size_t , size_t )const;

private:
    size_t sizeRow;
    size_t sizeColumn;
    int** ptr;


};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
