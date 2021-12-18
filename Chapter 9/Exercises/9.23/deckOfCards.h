#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "card.h"
#include <array>

class DeckOfCards{
public:
    static const size_t deckSize = 52;
    explicit DeckOfCards();
    void shuffle();
    Card dealCard()const;
    bool moreCards()const;

    void print()const;
    static int getCurrentCard();
private:
    std::array < Card , deckSize > deck;
    static int currentCard;

};



#endif // DECKOFCARDS_H_INCLUDED
