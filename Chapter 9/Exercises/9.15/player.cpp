#include "player.h"

Player::Player(){}

Player::Player(char s){
    setSign(s);
}


void Player::setSign(char sign){
    this->sign = sign;
}

void Player::setCurrentRow(){
    std::cout << "Enter the row : " ;
    std::cin >> currentRow;
    while( currentRow < 0 || currentRow > 3 ){
        std::cout << "Row must be 0-3" << std::endl;
        std::cout << "Enter the row : " ;
        std::cin >> currentRow;
    }
}

void Player::setCurrentColumn(){
    std::cout << "Enter the column : " ;
    std::cin >> currentColumn;
    while( currentColumn < 0 || currentColumn > 3 ){
        std::cout << "Column must be 0-3" << std::endl;
        std::cout << "Enter the column : " ;
        std::cin >> currentColumn;
    }
}

char Player::getSign()const{
    return sign;
}

size_t Player::getCurrentRow()const{
    return currentRow;
}

size_t Player::getCurrentColumn()const{
    return currentColumn;
}



