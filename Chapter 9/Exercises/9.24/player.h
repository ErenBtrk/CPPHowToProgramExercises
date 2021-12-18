#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "card.h"
#include <vector>


enum Hands{HIGH_HAND , PAIR , TWO_PAIRS , THREE_OF_A_KIND ,
                      STRAIGHT ,FLUSH , FULL_HOUSE , FOUR_OF_A_KIND,
                      STRAIGHT_FLUSH , ROYAL_FLUSH };

class Player{
public:
    static const std::array < std::string , 10 > handNames;

    Player();
    void setCard(Card &);
    void displayCards()const;
    Hands determineHand()const;
    void setValues();
    int compareHands(Player &)const;
    std::string toString()const;

    void sortCards();

    bool highHand()const;
    bool onePair()const;
    bool twoPairs()const;
    bool threeOfAKind()const;
    bool straight()const;
    bool flush()const;
    bool fullHouse()const;
    bool fourOfAKind()const;
    bool straightFlush()const;
    bool royalFlush()const;

    void setHide(bool);
    void clearVector();
    void drawCard(Card &);
    void dropCard(size_t);

    void displayValues()const;




    void setFaceFreq(); //silinecek
    void setSuitFreq(); //silinecek
    void displaySortedCards(); // silinecek
private:
    std::vector < Card > playerCards = std::vector < Card > (0);
    std::array < int ,15 > faceFrequency;
    std::array < int , 4 > suitFrequency;
    std::vector < int > sortedCards = std::vector < int > (0);




    int highest;
    int suitOfHighest;
    int firstPair;
    int secondPair;
    int highestOfPairs;
    int lowestOfPairs;
    int highestNonPair;
    int suitOfHighestNonPair;
    int triplet;
    int quart;
    int theFive;
    int totalCardValues;

    bool hide;



};



#endif // PLAYER_H_INCLUDED
