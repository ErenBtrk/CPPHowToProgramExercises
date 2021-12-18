#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED
#include <iostream>
#include "player.h"

class TicTacToe{
public:
    TicTacToe();
    void setGameBoard();
    void drawGame()const;
    void nextMove(Player &);

    bool isGameDone()const;
    void run();



private:
    static const size_t gameBoardSize = 7;
    char matrix[gameBoardSize][gameBoardSize];
    Player p1;
    Player p2;



};


#endif // TICTACTOE_H_INCLUDED
