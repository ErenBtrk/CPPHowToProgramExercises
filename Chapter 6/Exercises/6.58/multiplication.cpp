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
    int randomCorrect = rand() % 4 ;
    int randomWrong = rand() % 4 ;
    if ( studentAnswer != randomNum1 * randomNum2 ){
        switch(randomWrong){
            case 0:
                std::cout << "No.Please try again." << std::endl;
                break;
            case 1:
                std::cout << "Wrong.Try once more." << std::endl;
                break;
            case 2:
                std::cout << "Don't give up!" << std::endl;
                break;
            case 3:
                std::cout << "No.Keep trying." << std::endl;
                break;
        }
    }
    else{
        switch(randomCorrect){
            case 0:
                std::cout << "Very good!" << std::endl;
                break;
            case 1:
                std::cout << "Excellent!" << std::endl;
                break;
            case 2:
                std::cout << "Nice work!" << std::endl;
                break;
            case 3:
                std::cout << "Keep up the good work!" << std::endl;
                break;
        }
    }
}

void Multiplication::run(){
    setRandomNum1();
    setRandomNum2();
    displayQuestion();
    setStudentAnswer();

}
