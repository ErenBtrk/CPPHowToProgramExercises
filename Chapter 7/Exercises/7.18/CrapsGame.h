#ifndef CRAPSGAME_H_INCLUDED
#define CRAPSGAME_H_INCLUDED
#include <array>

enum Status{ CONTINUE, WON , LOST };

class CrapsGame{
public:
    static const size_t frequencySize = 22;
private:
    int turnNo;
    int dice1;
    int dice2;
    int sumOfDices;
    int rollNo;
    Status gameStatus;
    int myPoint;
    std::array < int , frequencySize > rollFrequencyWin ;
    std::array < int , frequencySize > rollFrequencyLose ;
    int wins;
    int loses;
    int totalRoll;
public:
    CrapsGame();
    void setTurnNo();
    void rollDice();
    void setRollNo(int);
    void setSumOfDices();
    void setGameStatus();
    void setMyPoint();
    void keepPlaying();
    void displayDetails();
    void setFrequency();
    void setWins();
    void setLoses();
    void setTotalRoll();

    int getGameStatus();

    void run();










};













#endif // CRAPSGAME_H_INCLUDED
