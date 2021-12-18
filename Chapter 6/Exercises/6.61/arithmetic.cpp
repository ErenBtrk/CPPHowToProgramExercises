#include <iostream>
#include "arithmetic.h"
#include <time.h>
#include <stdlib.h>



Arithmetic::Arithmetic():arithmeticType(0),difficultyLevel(0),randomNum1(0),randomNum2(0),
                                      studentAnswer(0),correctAnswers(0),percentage(0.0){}


void Arithmetic::setArithmeticType(){
    while(arithmeticType != '+' && arithmeticType != '-' && arithmeticType != '*' && arithmeticType != '/'){
        std::cout << "Please choose type of arithmetic problem ; " << std::endl;
        std::cout << "[+]Addition" << std::endl << "[-]Substraction" << std::endl
                        << "[*]Multiplication" << std::endl << "[/]Division" << std::endl;
        std::cout << "Enter your choice ( + , - , * , / ) : " ;
        std::cin >> arithmeticType ;
    }
}


void Arithmetic::setDifficultyLevel(){
    while(difficultyLevel != 1 && difficultyLevel != 2){
        std::cout << "Please choose one of the difficulty levels below , " << std::endl;
        std::cout << "[1]-One digit Arithmetic" << std::endl << "[2]-Two digits Arithmetic" << std::endl;
        std::cout << "Enter your choice : " ;
        std::cin >> difficultyLevel ;
    }

}

void Arithmetic::setRandomNum1(){
    if(difficultyLevel == 1){
        if(arithmeticType == '/'){
            randomNum1 = 1+rand() % 9;
        }
        else{
            randomNum1 = rand() % 10 ;
        }
    }
    else{
        randomNum1 = 10+rand() % 90 ;
    }
}

void Arithmetic::setRandomNum2(){
    if(difficultyLevel == 1){
        if(arithmeticType == '/'){
            randomNum2 = 1 + rand() % 9;
        }
        else{
            randomNum2 = rand() % 10 ;
        }
    }
    else{
        randomNum2 = 10+rand() % 90 ;
    }
}

void Arithmetic::displayQuestion(){
    switch(arithmeticType){
        case '+':
            std::cout << "How much is " << randomNum1 << " + " << randomNum2 << "?" << std::endl;
            break;
        case '-':
            std::cout << "How much is " << randomNum1 << " - " << randomNum2 << "?" << std::endl;
            break;
        case '*':
            std::cout << "How much is " << randomNum1 << " x " << randomNum2 << "?" << std::endl;
            break;
        case '/':
            std::cout << "How much is " << randomNum1 << " / " << randomNum2 << "?" << std::endl;
            break;
    }

}

void Arithmetic::setStudentAnswer(){

        std::cout << "Enter your answer : " ;
        std::cin >> studentAnswer ;
        setMessage();

}

void Arithmetic::setMessage(){
    int randomCorrect = rand() % 4 ;
    int randomWrong = rand() % 4 ;
    int operationType;
    switch(arithmeticType){
    case '+':
        operationType = randomNum1+ randomNum2;
        break;
    case '-' :
        operationType = randomNum1 - randomNum2;
        break;
    case '*' :
        operationType = randomNum1 * randomNum2;
        break;
    case '/' :
        operationType = randomNum1 / randomNum2;
        break;
    }
    if ( studentAnswer != operationType ){
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

void Arithmetic::setCorrectAnswers(){
    correctAnswers++;
}

void Arithmetic::setPercentage(){
    percentage = correctAnswers / 10.0 ;
}

void Arithmetic::displayFinalMessage(){
    std::cout << "Your correct answers percentage = %" << percentage*100 << std::endl;
    if(percentage < 0.75){
        std::cout << "Please ask your teacher for extra help." << std::endl;
    }
    else{
        std::cout << "Congratulations, you are ready to go to the next level!" << std::endl;
    }
}
void Arithmetic::run(){
        setArithmeticType();
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

