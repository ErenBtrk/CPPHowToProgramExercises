#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "card.h"
#include <vector>

class DeckOfCards{
public:
    static const size_t deckSize = 52;
    explicit DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards()const;

    void print()const;
private:
    std::vector < Card > deck = std::vector < Card > (deckSize);
    int currentCard;

};



#endif // DECKOFCARDS_H_INCLUDED
