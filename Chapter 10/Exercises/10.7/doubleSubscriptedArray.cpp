#include "doubleSubscriptedArray.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>

DoubleSubscriptedArray::DoubleSubscriptedArray( size_t row , size_t column ){
    setSizeRow(row);
    setSizeColumn(column);
    ptr = new int* [row];
    for( size_t i = 0 ; i < row ; i++ ){
            ptr[i] = new int[column];
    }

    for( size_t i = 0 ; i < row ; i++ ){
        for( size_t j = 0 ; j < column ; j++ ){
            ptr[i][j] = 0;
        }
    }
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray & dsa){
    setSizeRow(dsa.sizeRow);
    setSizeColumn(dsa.sizeColumn);
    ptr = new int*[sizeRow];
    for( size_t i = 0 ; i < sizeRow ; i++ ){
            ptr[i] = new int[sizeColumn];
    }
    for( size_t i = 0 ; i < sizeRow ; i++ ){
        for( size_t j = 0 ; j < sizeColumn ; j++ ){
            ptr[i][j] = dsa.ptr[i][j];
        }
    }

}

DoubleSubscriptedArray::~DoubleSubscriptedArray(){
    std::cout << "Destructor invoked...\n" ;
    for( size_t i = 0 ; i < sizeRow ; i++ ){
        delete [] ptr[i];
    }
    delete[] ptr;
}

void DoubleSubscriptedArray::setSizeRow(int row){
    if( row > 0 ){
        sizeRow = row;
    }
    else{
        throw std::invalid_argument("Array row size must be greater than 0\n");
    }
}

void DoubleSubscriptedArray::setSizeColumn(int column){
    if( column > 0){
        sizeColumn = column;
    }
    else{
        throw std::invalid_argument("Array column size must be greater than 0\n");
    }
}

size_t DoubleSubscriptedArray::getSizeRow()const{
    return sizeRow;
}

size_t DoubleSubscriptedArray::getSizeColumn()const{
    return sizeColumn;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &dsa){
    if( this != &dsa ){
        if( sizeRow != dsa.sizeRow || sizeColumn != dsa.sizeColumn ){
            for( size_t i = 0 ; i < sizeRow ; i++ ){
                delete [] ptr[i];
            }
            delete[] ptr;
            setSizeRow(dsa.sizeRow);
            setSizeColumn(dsa.sizeColumn);

            ptr = new int* [sizeRow];
            for( size_t i = 0 ; i < sizeRow ; i++ ){
                ptr[i] = new int[sizeColumn];
            }
            for( size_t i = 0 ; i < sizeRow ; i++ ){
                for( size_t j = 0 ; j < sizeColumn ; j++ ){
                    ptr[i][j] = dsa.ptr[i][j];
                }
            }
        }
    }
    return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &dsa)const{
    if(  ( sizeRow != dsa.sizeRow ) || ( sizeColumn != dsa.sizeColumn ) ){
        return false;
    }
    else{
        for( size_t i = 0 ; i < sizeRow ; i++ ){
            for( size_t j = 0 ; j < sizeColumn ; j++ ){
                if( ptr[i][j] != dsa.ptr[i][j] ){
                    return false;
                }
            }
        }
    }
    return true;
}

int &DoubleSubscriptedArray::operator( )(size_t row,size_t column){
    if(  ( row < 0 || row >= sizeRow ) || (column < 0 || column >= sizeColumn) ){
            throw std::out_of_range("Subscript out of range.");
    }
        return ptr[row][column];
}

int DoubleSubscriptedArray::operator( )(size_t row,size_t column)const{
    if(  ( row < 0 || row >= sizeRow ) || (column < 0 || column >= sizeColumn) ){
            throw std::out_of_range("Subscript out of range.");
    }
        return ptr[row][column];
}

std::ostream &operator<<( std::ostream &output , const DoubleSubscriptedArray &dsa){
    for( size_t i = 0 ; i < dsa.sizeRow ; i++ ){
        for( size_t j = 0 ; j < dsa.sizeColumn ; j++ ){
            output << std::setw(2) << dsa.ptr[i][j] ;
        }
        output << std::endl;
    }
    return output;
}

std::istream &operator>>( std::istream &input ,DoubleSubscriptedArray &dsa){
    for( size_t i = 0 ; i < dsa.sizeRow ; i++ ){
        for( size_t j = 0 ; j < dsa.sizeColumn ; j++ ){
            input >> dsa.ptr[i][j];
        }
    }
    return input;
}

