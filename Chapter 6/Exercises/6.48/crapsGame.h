#ifndef CRAPSGAME_H_INCLUDED
#define CRAPSGAME_H_INCLUDED

enum Status{ CONTINUE, WON , LOST };

class CrapsGame{
private:
    int turnNo;
    int dice1;
    int dice2;
    int sumOfDice;
    int myPoint;
    Status gameStatus;
    double wager;
    double bankBalance;
public:
    CrapsGame();
    void setTurnNo();
    void setTurnNo(int);
    void rollDice();
    void setGameStatus();
    void setMyPoint();
    void setSumOfDice();
    void setWager();
    void setBankBalance();
    void keepPlaying();

    Status getGameStatus();
    int getTurnNo();
    double getBankBalance();

    void checkBankBalance();
    void displayDetails();
    void run();



};


#endif // CRAPSGAME_H_INCLUDED
