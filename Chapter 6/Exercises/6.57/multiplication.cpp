#include <iostream>
#include "multiplication.h"
#include <time.h>
#include <stdlib.h>



Multiplication::Multiplication():randomNum1(0),randomNum2(0){}

void Multiplication::setRandomNum1(){
    randomNum1 = rand() % 10 ;
}

void Multiplication::setRandomNum2(){
    randomNum2 = rand() % 10 ;
}

void Multiplication::displayQuestion(){
    std::cout << "How much is " << randomNum1 << " times " << randomNum2 << "?" << std::endl;
}

void Multiplication::setStudentAnswer(){
    do{
        std::cout << "Enter your answer : " ;
        std::cin >> studentAnswer ;
        setMessage();
    }while( studentAnswer != randomNum1 * randomNum2 );
}

void Multiplication::setMessage(){
    if ( studentAnswer != randomNum1 * randomNum2 ){
        std::cout << "No.Please try again." << std::endl;
    }
    else{
        std::cout << "Very good!" << std::endl;
    }
}

void Multiplication::run(){
    setRandomNum1();
    setRandomNum2();
    displayQuestion();
    setStudentAnswer();

}
