#ifndef INTEGERSET_H_INCLUDED
#define INTEGERSET_H_INCLUDED
#include <vector>

class IntegerSet{
public:
    IntegerSet();
    IntegerSet( int [] , size_t );
    void setVector();
    void insertElement(int);
    void deleteElement(int);
    IntegerSet unionOfSets(IntegerSet &,IntegerSet &)const;
    IntegerSet intersectionOfSets(IntegerSet &,IntegerSet &)const;
    void printSet()const;
    bool isEqual(IntegerSet &,IntegerSet &)const;

private:
    std::vector < bool > vectorInt = std::vector < bool > (100);

};


#endif // INTEGERSET_H_INCLUDED
