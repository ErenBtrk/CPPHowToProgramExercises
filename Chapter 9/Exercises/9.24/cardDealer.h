#ifndef CARDDEALER_H_INCLUDED
#define CARDDEALER_H_INCLUDED
#include "deckOfCards.h"
#include "player.h"
#include "card.h"

class CardDealer{
public:
    CardDealer(DeckOfCards &);


    void displayCardDealersHand()const;
    void toString()const;
    Player getCardDealersHand()const;
    void drawCard();
    void dropCard();
    void displayEightCardPool()const;
    void findBestHand();
    void displayCardDealersHandValues();

private:
    Player cardDealersHand;
    DeckOfCards &deck;
    std::vector < std::string > combinationIndex;
    std::vector < Card > eightCardPool;






};

#endif // CARDDEALER_H_INCLUDED
