#include <iostream>
#include "deckOfCards.h"
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    DeckOfCards d;
    d.shuffle();
    while( d.moreCards() ){
        std::cout << d.dealCard().toString() << std::endl;
    }


}
