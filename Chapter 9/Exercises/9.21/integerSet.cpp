#include "integerSet.h"
#include <iostream>

IntegerSet::IntegerSet(){
    setVector();
}

IntegerSet::IntegerSet( int arr[] , size_t arraySize ){
    setVector();
    for( size_t i = 0 ; i < arraySize ; i++ ){
        vectorInt[ arr[i] ] = true;
    }
}


void IntegerSet::setVector(){
    for( size_t i = 0 ; i < 100 ; i++ ){
        vectorInt[i] = false;
    }
}


IntegerSet IntegerSet::unionOfSets(IntegerSet &is1,IntegerSet &is2)const{
    IntegerSet is3;
    for( size_t i = 0 ; i < 100 ; i++ ){
        if( is1.vectorInt[i] == true || is2.vectorInt[i] == true ){
            is3.vectorInt[i] = true;
        }
        else{
            is3.vectorInt[i] = false;
        }
    }
    return is3;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet &is1,IntegerSet &is2)const{
    IntegerSet is3;
    for( size_t i = 0 ; i < 100 ; i++ ){
        if( is1.vectorInt[i] == true && is2.vectorInt[i] == true ){
            is3.vectorInt[i] = true;
        }
        else{
            is3.vectorInt[i] = false;
        }
    }
    return is3;
}

void IntegerSet::insertElement(int index){
    vectorInt[index] = true;
}

void IntegerSet::deleteElement(int index){
    if( vectorInt[ index ] == false ){
        std::cout << "There is no such element in the set" << std::endl;
    }
    else{
        vectorInt[index] = false;
    }
}

void IntegerSet::printSet( )const{
    for( size_t i = 0 ; i < 100 ; i++ ){
        if( vectorInt[i] == true ){
            std::cout << i << "  " ;
        }
    }

    std::cout << std::endl;
}

bool IntegerSet::isEqual(IntegerSet &i1,IntegerSet &i2)const{
    if( i1.vectorInt == i2.vectorInt ){
        return true;
    }
    else{
        return false;
    }
}

