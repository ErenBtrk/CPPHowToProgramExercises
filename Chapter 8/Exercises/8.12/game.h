#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "tortoise.h"
#include "hare.h"

class Game{
private:
    int generatedRandomNumber;
public:
    Game();
    void displayStartMessage();
    void generateRandomNumber();
    void moveHare(Hare &);
    void moveTortoise(Tortoise &);
    void displayLine(Hare &,Tortoise &)const;

    void run();

};



#endif // GAME_H_INCLUDED
