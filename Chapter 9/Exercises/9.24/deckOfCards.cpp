#include "deckOfCards.h"
#include "card.h"
#include <stdlib.h>
#include <time.h>
#include <vector>



DeckOfCards::DeckOfCards():currentCard(0){
    size_t cardNo = 0;
    for ( size_t i = 0 ; i < Card::suitStr.size() ; i++ ){
        for( size_t j = 0 ; j < Card::faceStr.size() ; j++ ){
            deck[cardNo].setSuit(i);
            deck[cardNo].setFace(j);
            cardNo++;
        }
    }
}

void DeckOfCards::shuffle(){

    size_t cardNo = 0;
    Card temp;
    for( size_t i =0 ; i < Card::suitStr.size() ; i++ ){
        for( size_t j = 0 ; j < Card::faceStr.size() ; j ++ ){
            int randomCard = rand()% deckSize;
            temp = deck[cardNo];
            deck[cardNo] = deck[randomCard];
            deck[randomCard] = temp;
            cardNo++;
        }
    }
}

Card DeckOfCards::dealCard(){
    Card temp;
    temp = deck[currentCard];
    deck.erase(deck.begin()+currentCard);
    return temp;
}

void DeckOfCards::print()const{
    size_t cardNo = 0;

    while( cardNo < deck.size() ){
        std::cout << cardNo+1 << "." << deck[cardNo++].toString() << std::endl;
    }
    std::cout << std::endl;

}

bool DeckOfCards::moreCards()const{
    if( deck.size() <= 0 ){
        return false;
    }
    else{
        return true;
    }
}




