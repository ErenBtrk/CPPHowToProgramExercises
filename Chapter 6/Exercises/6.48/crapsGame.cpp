#include <iostream>
#include <time.h>
#include <cstdlib>
#include "crapsGame.h"


CrapsGame::CrapsGame():turnNo(0),dice1(0),dice2(0),bankBalance(1000.0),
                                          myPoint(100),gameStatus(CONTINUE),sumOfDice(0),
                                          wager(0){}



void CrapsGame::setTurnNo(){
    char choice;
        do{
            std::cout << "Please enter [Y] to play ( [N] to quit )" << std::endl;
            std::cin >> choice ;

        }while(toupper(choice) != 'Y' && toupper(choice) != 'N');

        if( toupper(choice) == 'Y' ){
            turnNo++;
        }
        else{
            turnNo = -1;
        }

}

void CrapsGame::setTurnNo(int no){
    turnNo = no;
}

void CrapsGame::rollDice(){
    int choice = 0;
    srand(time(NULL));

    while( choice != 1){
        std::cout << "To roll dices enter [1] : " ;
        std::cin >> choice ;
    }

    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;

    std::cout << "Dice1 = " << dice1 << std::endl;
    std::cout << "Dice2 = " << dice2 << std::endl;
}

void CrapsGame::setSumOfDice(){
    sumOfDice = dice1 + dice2;
    std::cout << "Sum of dices = " << sumOfDice << std::endl;
}



void CrapsGame::setGameStatus(){

            if ( sumOfDice == 7 || sumOfDice == 11 ){
                gameStatus = WON;
                std::cout << "You have won the game !!" << std::endl;
            }
            else if( sumOfDice == 2 || sumOfDice == 3 || sumOfDice == 12){
                gameStatus = LOST;
                std::cout << "You have lost the game :(" << std::endl;
            }
            else{
                gameStatus = CONTINUE;
                std::cout << "The game continues !!  " <<  std::endl;
            }
}



void CrapsGame::setMyPoint(){
    myPoint = sumOfDice ;
}

void CrapsGame::setWager(){
    do{
        std::cout << "Please enter wager amount : " << std::endl;
        std::cin >> wager ;
    }while(wager <= 0 || wager > bankBalance);

    std::cout << "Wager amount has been setted to : " << wager << std::endl;
}

void CrapsGame::setBankBalance(){
    if( gameStatus == WON ){
        bankBalance += wager;
    }
    else if( gameStatus == LOST ){
        bankBalance -= wager;
    }
}

Status CrapsGame::getGameStatus(){
    return gameStatus;
}

int CrapsGame::getTurnNo(){
    return turnNo;
}

double CrapsGame::getBankBalance(){
    return bankBalance;
}
void CrapsGame::keepPlaying(){
    setMyPoint();
    while( getGameStatus() == CONTINUE ){
        rollDice();
        setSumOfDice();
        if( sumOfDice == myPoint){
            std::cout << "You have found your point. Congrats you won." << std::endl;
            gameStatus = WON;
            break;
        }
        else if( sumOfDice == 7 ){
            std::cout << "You have lost . :(" << std::endl;
            gameStatus = LOST;
            break;
        }
    }
    setBankBalance();
    checkBankBalance();
    displayDetails();

}

void CrapsGame::checkBankBalance(){
    if(bankBalance <= 0){
        std::cout << "You have lost all your money :(((" << std::endl;
     }
}

void CrapsGame::displayDetails(){
    if(turnNo == -1){
        std::cout << "Successfuly exited..." << std::endl;
    }
    else{
        std::cout << "Game Status = " ;
        if( gameStatus == CONTINUE ){
            std::cout << "CONTINUE" << std::endl;
        }
        else if( gameStatus == WON ){
            std::cout << "WON" << std::endl;
        }
        else{
            std::cout << "LOST" << std::endl;
        }
        std::cout << "Current bank balance = " << bankBalance << std::endl;
    }
}

void CrapsGame::run(){
        setTurnNo();
        setWager();
        rollDice();
        setSumOfDice();
        setGameStatus();
        setBankBalance();
        checkBankBalance();
        displayDetails();
        if( getGameStatus() == CONTINUE){
            keepPlaying();
        }
        setTurnNo(0);
}
