#include <iostream>
#include <iomanip>
#include "questionGame.h"

QuestionGame::QuestionGame():questionNo(1),questionPoint(20.0),score(0.0){}

void QuestionGame::setQuestionNo(){
    questionNo++;
}

void QuestionGame::setQuestionText(){
    switch(questionNo){
    case 1:
        questionText = "Which option has no number ?" ;
        break;
    case 2:
        questionText = "2+2 = ?" ;
        break;
    case 3:
        questionText = "Who is the best basketball player of all time ? " ;
        break;
    case 4:
        questionText = "Which state isnt in Asia ? ";
        break;
    case 5:
        questionText = "Who is Yarasa Reis ? " ;
        break;
    }
}

void QuestionGame::setOptions(){
    switch(questionNo){
    case 1:
        options = "A-12     B-44    C-92    D-a     E-23";
        break;
    case 2:
        options = "A-1    B-2    C-3     D-5     E-4";
        break;
    case 3:
        options = "A-Durant B-Jordan C-Lebron D-Kobe E-Scalabrine";
        break;
    case 4:
        options = "A-Zimbabwe B-Japan C-Turkey D-India E-China";
        break;
    case 5:
        options = "A-Reis B-King C-Adam D-Ustad E-Hepsi";
        break;
    }
}

void QuestionGame::setCorrectAnswer(){
    switch(questionNo){
    case 1:
        correctAnswer = 'D' ;
        break;
    case 2:
        correctAnswer = 'E' ;
        break;
    case 3:
        correctAnswer = 'B' ;
        break;
    case 4:
        correctAnswer = 'A' ;
        break;
    case 5:
        correctAnswer = 'E' ;
        break;

    }

}

int QuestionGame::getQuestionNo()const{
    return questionNo;
}

std::string QuestionGame::getQuestionText()const{
    return questionText;
}

std::string QuestionGame::getOptions()const{
    return options;
}

char QuestionGame::getCorrectAnswer()const{
    return correctAnswer;
}

int QuestionGame::getScore()const{
    return score;
}

void QuestionGame::answer(){
    int flag=0;

    while ( flag != 1){
        std::cout << "Please enter an option (a,b,c,d,e) : " << std::endl;
        std::cin >> competitorAnswer;
        switch(competitorAnswer){
            case 'a':case'A':case'b':case'B':case 'c':case 'C':case 'd':case'D':case'e':case'E':
                flag = 1;
                break;
            default:
                flag = 0;
                break;
        }
    }
    if(toupper(competitorAnswer) == correctAnswer){
        if(questionNo == 5){
            std::cout << "Correct answer!! Congrats..." << std::endl;
            score += questionPoint;
        }
        else{
            std::cout << "Correct answer!! Congrats...New question on the way." << std::endl;
            score += questionPoint;
        }
    }
    else{
        if(questionNo == 5){
            std::cout << "Wrong answer!!..." << std::endl;
        }
        else{
            std::cout << "Wrong answer...New question on the way." << std::endl;
        }
    }

}

void QuestionGame::displayStats()const{
    std::cout << "Your score is = " << score << std::endl;
}

void QuestionGame::displayResult()const{
    std::cout << "Your total score after the game = " << score << std::endl;
    switch(score){
        case 20:case 40:case 60:
            std::cout << "Time to brush up on your knowledge..." << std::endl;
            break;
        case 80:
            std::cout << "Very good!" << std::endl;
            break;
        case 100:
            std::cout << "EXCELLENT!!!" << std::endl;
            break;
    }
}

void QuestionGame::run(){
    std::cout << "Game is starting ..." << std::endl;
    for(int i = 0 ; i < 5 ; i++){
        std::cout << questionNo << ".QUESTION : " << std::endl;
        setQuestionText();
        setOptions();
        setCorrectAnswer();
        std::cout << questionText << std::endl;
        std::cout << options << std::endl;
        answer();
        displayStats();
        setQuestionNo();
    }
    displayResult();
}
