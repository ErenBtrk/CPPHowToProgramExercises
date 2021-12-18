#include <iostream>
#include "hare.h"

Hare::Hare():square(1){}

void Hare::sleep(){}

void Hare::bigHop(){
    square += 9;
}

void Hare::bigSlip(){
    square -= 12;
    if(square < 1){
        square = 1;
    }
}

void Hare::smallHop(){
    square += 1;
}

void Hare::smallSlip(){
    square -= 2;
    if(square < 1){
        square = 1;
    }
}

bool Hare::didWin()const{
    if( square >= 70 ){
        return true;
    }
    else{
        return false;
    }
}

int Hare::getSquare()const{
    return square;
}
