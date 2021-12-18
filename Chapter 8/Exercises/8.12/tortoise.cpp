#include <iostream>
#include "tortoise.h"

Tortoise::Tortoise():square(1){}

void Tortoise::fastPlod(){
    square += 3;
}

void Tortoise::slip(){
    square -= 6;
    if(square < 1){
        square = 1;
    }
}

void Tortoise::slowPlod(){
    square += 1;
}

bool Tortoise::didWin()const{
    if( square >= 70 ){
        return true;
    }
    else{
        return false;
    }
}

int Tortoise::getSquare()const{
    return square;
}
