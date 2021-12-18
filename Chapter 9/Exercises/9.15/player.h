#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>

class Player{
public:
    Player();
    Player(char);
    void setSign(char);
    void setCurrentRow();
    void setCurrentColumn();

    char getSign()const;
    size_t getCurrentRow()const;
    size_t getCurrentColumn()const;
private:
    char sign;
    size_t currentRow;
    size_t currentColumn;

};

#endif // PLAYER_H_INCLUDED
