#include "TicTacToe.h"
#include "player.h"
#include <iostream>
#include <iomanip>


TicTacToe::TicTacToe(){
    setGameBoard();
    drawGame();
    p1.setSign('X');
    p2.setSign('O');
}

void TicTacToe::setGameBoard(){
    for( size_t i = 0 ; i < gameBoardSize ; i++ ){
        for( size_t j = 0 ; j < gameBoardSize ; j++ ){
            if( i == 0 || i == gameBoardSize-1 || j == 0 || j == gameBoardSize-1 || i % 2 == 0 || j % 2  == 0){
                matrix[i][j] = '.' ;
            }
            else{
                matrix[i][j] = ' ';
            }
        }

    }


}
void TicTacToe::drawGame()const{
    for( size_t i = 0 ; i < gameBoardSize ; i++ ){
        std::cout << std::setw(40) ;
        for( size_t j = 0 ; j < gameBoardSize ; j++ ){
                std::cout << matrix[i][j] << "  "  ;
        }
        std::cout << std::endl << std::endl;
    }
}

void TicTacToe::nextMove(Player &p){
    p.setCurrentRow();
    p.setCurrentColumn();

    size_t tempRow = p.getCurrentRow();
    size_t tempColumn = p.getCurrentColumn();

    switch ( tempRow ){
    case 1:
        break;
    case 2:
        tempRow += 1;
        break;
    case 3:
        tempRow +=2;
        break;
    }
    switch( tempColumn ){
    case 1:
        break;
    case 2:
        tempColumn += 1;
        break;
    case 3:
        tempColumn += 2;
        break;
    }
    while( matrix[tempRow][tempColumn] != ' '){
        tempRow = 0;
        tempColumn = 0;
        std::cout << "A player already moved here.Enter another row and column : " << std::endl;
        p.setCurrentRow();
        p.setCurrentColumn();
        tempRow = p.getCurrentRow();
        tempColumn = p.getCurrentColumn();
        switch ( tempRow ){
            case 1:
            break;
            case 2:
                tempRow += 1;
            break;
            case 3:
                tempRow +=2;
            break;
        }
        switch( tempColumn ){
            case 1:
            break;
            case 2:
                tempColumn += 1;
            break;
            case 3:
                tempColumn += 2;
            break;
        }
    }
    matrix[tempRow][tempColumn] = p.getSign();

}

bool TicTacToe::isGameDone()const{
    //row tracing
    bool flag;
    char temp;
    for( size_t i = 1 ; i <= 5 ; i += 2 ){
            if(matrix[i][1] == ' '){
                flag = false;
            }
            else{
                flag = true;
            }
            temp = matrix[i][1];

        for( size_t j = 1 ; j < 5 ; j += 2){
            if( temp == matrix[i][j+2]){
                flag &= true;
            }
            else{
                flag &= false;
            }
        }
        if( flag == true){
            return true;
        }
    }
    //column tracing
    for( size_t j = 1 ; j <= 5 ; j += 2 ){
            if(matrix[1][j] == ' '){
                flag = false;
            }
            else{
                flag = true;
            }
            temp = matrix[1][j];

        for( size_t i = 1 ; i < 5 ; i += 2){
            if( temp == matrix[i+2][j]){
                flag &= true;
            }
            else{
                flag &= false;
            }
        }
        if( flag == true){
            return true;
        }
    }
    //matrix diagonal tracing
    if( ( matrix[1][1] == matrix[3][3] ) && ( matrix[3][3] == matrix[5][5] ) &&
        matrix[1][1] != ' ' ){
        return true;
    }
    if( (matrix[1][5] == matrix[3][3] ) && (matrix[3][3] == matrix[5][1] ) &&
        matrix[1][5] != ' '){
        return true;
    }
    return false;


}


void TicTacToe::run(){
    int counter = 0;
    while(true ){
        nextMove(p1);
        counter++;
        if(counter == 9){
            drawGame();
            break;
        }
        drawGame();
        if( isGameDone() ){
            std::cout << "Player 1 wins!!!!" << std::endl;
            break;
        }
        nextMove(p2);
        counter++;
        drawGame();
         if( isGameDone() ){
            std::cout << "Player 2 wins!!!!" << std::endl;
            break;
        }
    }
    if( !isGameDone() ){
        std::cout << "Draw" << std::endl;
    }



}








