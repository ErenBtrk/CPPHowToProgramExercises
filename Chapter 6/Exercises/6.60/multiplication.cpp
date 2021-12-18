#include <iostream>
#include "multiplication.h"
#include <time.h>
#include <stdlib.h>



Multiplication::Multiplication():difficultyLevel(0),randomNum1(0),randomNum2(0),correctAnswers(0),percentage(0.0){}

void Multiplication::setDifficultyLevel(){
    while(difficultyLevel != 1 && difficultyLevel != 2){
        std::cout << "Please choose one of the difficulty levels below , " << std::endl;
        std::cout << "[1]-One digit multiplication" << std::endl << "[2]-Two digits multiplication" << std::endl;
        std::cout << "Enter your choice : " ;
        std::cin >> difficultyLevel ;
    }

}

void Multiplication::setRandomNum1(){
    if(difficultyLevel == 1){
        randomNum1 = rand() % 10 ;
    }
    else{
        randomNum1 = 10+rand() % 90 ;
    }
}

void Multiplication::setRandomNum2(){
    if(difficultyLevel == 1){
        randomNum2 = rand() % 10 ;
    }
    else{
        randomNum2 = 10+rand() % 90 ;
    }
}

void Multiplication::displayQuestion(){
    std::cout << "How much is " << randomNum1 << " times " << randomNum2 << "?" << std::endl;
}

void Multiplication::setStudentAnswer(){

        std::cout << "Enter your answer : " ;
        std::cin >> studentAnswer ;
        setMessage();

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
        setCorrectAnswers();
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

void Multiplication::setCorrectAnswers(){
    correctAnswers++;
}

void Multiplication::setPercentage(){
    percentage = correctAnswers / 10.0 ;
}

void Multiplication::displayFinalMessage(){
    std::cout << "Your correct answers percentage = %" << percentage*100 << std::endl;
    if(percentage < 0.75){
        std::cout << "Please ask your teacher for extra help." << std::endl;
    }
    else{
        std::cout << "Congratulations, you are ready to go to the next level!" << std::endl;
    }
}
void Multiplication::run(){
        setDifficultyLevel();
    for(int i = 0 ; i < 10 ; i++){
        std::cout << i+1 << " . Question : " << std::endl;
        setRandomNum1();
        setRandomNum2();
        displayQuestion();
        setStudentAnswer();
        setPercentage();
    }
    displayFinalMessage();

}

