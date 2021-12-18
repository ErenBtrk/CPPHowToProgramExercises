#include <iostream>
#include <iomanip>
#include "CrapsGame.h"


CrapsGame::CrapsGame():turnNo(0),dice1(0),dice2(0),
                                             sumOfDices(0),rollNo(0),
                                             gameStatus(CONTINUE),
                                             myPoint(0),wins(0),loses(0),
                                             totalRoll(0)
                                             {
                                                rollFrequencyLose = {0};
                                                rollFrequencyWin = {0};
                                             }


void CrapsGame::setTurnNo(){
    turnNo++;
}

void CrapsGame::rollDice(){
    dice1 = 1 + rand() % 6 ;
    dice2 = 1 + rand() % 6 ;
    rollNo++;
}

void CrapsGame::setRollNo(int x=0){
    rollNo = x;
}

void CrapsGame::setSumOfDices(){
    sumOfDices = dice1 + dice2;
}

void CrapsGame::setGameStatus(){
    switch( sumOfDices ){
    case 7: case 11:
        gameStatus = WON;
        break;
    case 2: case 3: case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        break;
    }
}

void CrapsGame::setMyPoint(){
    if( gameStatus == CONTINUE ){
        myPoint = sumOfDices;
    }
}

void CrapsGame::keepPlaying(){
    while( gameStatus == CONTINUE ){
        rollDice();
        setSumOfDices();
        if( sumOfDices == myPoint ){
            gameStatus = WON;
            break;
        }
        else if( sumOfDices == 7){
            gameStatus = LOST;
            break;
        }
    }
}
void CrapsGame::displayDetails(){
    std::cout << std::setw(16) << "Number of rolls" << std::setw(17) << "Frequency(Win)"  << std::setw(17) << "Frequency(Lose)" << std::endl;
    for( size_t i = 1 ; i < frequencySize ; i++){
        if( i == frequencySize - 1 ){
            std::cout << std::setw(16) << "20+" << std::setw(17) << rollFrequencyWin[i] << std::setw(17) << rollFrequencyLose[i]<< std::endl;
        }
        else{
            std::cout << std::setw(16) << i << std::setw(17) << rollFrequencyWin[i] << std::setw(17) << rollFrequencyLose[i] << std::endl;
        }
    }
    std::cout << std::endl << "Total wins = " << wins << std::endl;
    std::cout << std::endl << "Total loses = " << loses << std::endl;
    std::cout << std::endl << "Percentage of wins = % " << ( double ) wins / 1000 * 100 << std::endl;
    std::cout << std::endl << "Average lenght of rolls per game = " << std::setprecision(2)  << std::fixed << (double) totalRoll / 1000 << std::endl;
}

void CrapsGame::setFrequency(){
    if( rollNo > 20){
        if( getGameStatus() == WON){
            rollFrequencyWin[21]++;
        }
        else{
            rollFrequencyLose[21]++;
        }

    }
    else{
        if( getGameStatus() == WON){
            rollFrequencyWin[rollNo]++;
        }
        else{
            rollFrequencyLose[rollNo]++;
        }
    }

}

void CrapsGame::setWins(){
    if( getGameStatus() == WON ){
        wins++;
    }
}
void CrapsGame::setLoses(){
    if( getGameStatus() == LOST ){
        loses++;
    }
}

void CrapsGame::setTotalRoll(){
    totalRoll += rollNo;
}

int CrapsGame::getGameStatus(){
    return gameStatus;
}

void CrapsGame::run(){
    setTurnNo();
    rollDice();
    setSumOfDices();
    setGameStatus();
    setMyPoint();
    if( getGameStatus() == CONTINUE ){
        keepPlaying();
    }
    if( getGameStatus() == WON ){
        setWins();
        setFrequency();
    }
    if( getGameStatus() == LOST ){
        setLoses();
        setFrequency();
    }
    setTotalRoll();
    setRollNo();

}
