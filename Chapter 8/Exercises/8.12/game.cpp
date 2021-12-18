#include <iostream>
#include <iomanip>
#include <time.h>
#include <random>
#include "tortoise.h"
#include "hare.h"
#include "game.h"
#include <windows.h>


std::default_random_engine engine(static_cast<int>(time(NULL)));
std::uniform_int_distribution <int> randomNumber(1,10);

Game::Game():generatedRandomNumber(0){}

void Game::displayStartMessage(){
    std::cout << "BANG !!!!!" << std::endl << "AND THEY'RE OFF !!!!!" << std::endl;
}

void Game::generateRandomNumber(){

    randomNumber(engine);
    generatedRandomNumber = randomNumber(engine);
}

void Game::moveHare(Hare &h){
    switch(generatedRandomNumber){
    case 1:case 2:
        h.sleep();
        break;
    case 3:case 4:
        h.bigHop();
        break;
    case 5:
        h.bigSlip();
        break;
    case 6:case 7:case 8:
        h.smallHop();
        break;
    case 9:case 10:
        h.smallSlip();
        break;
    }
}

void Game::moveTortoise(Tortoise &t){
    switch(generatedRandomNumber){
    case 1:case 2:case 3:case 4:case 5:
        t.fastPlod();
        break;
    case 6:case 7:
        t.slip();
        break;
    case 8:case 9:case 10:
        t.slowPlod();
        break;
    }

}

void Game::displayLine(Hare &h,Tortoise &t)const{
    if( h.getSquare() > t.getSquare() ){
        std::cout << std::setw( t.getSquare() ) << "T" << std::setw( h.getSquare() - t.getSquare() ) << "H" << std::endl;
    }
    else if( t.getSquare() > h.getSquare() ){
        std::cout << std::setw( h.getSquare() ) << "H" << std::setw( t.getSquare() - h.getSquare() ) << "T"<< std::endl;
    }
    else{
        std::cout << "OUCH" << "    hare =" <<h.getSquare() << "  torto =" << t.getSquare() <<std::endl;
    }

}

void Game::run(){
    Hare h;
    Tortoise t;
    displayStartMessage();
    while( !h.didWin() && !t.didWin() ){
        generateRandomNumber();
        moveHare(h);
        moveTortoise(t);
        displayLine(h,t);
        Sleep(500);
    }
    if( t.didWin() ){
        std::cout << "Tortoise wins !!!!" << std::endl;
    }
    else if( h.didWin() ){
        std::cout << "Hare wins !!!!" << std::endl;
    }
}
