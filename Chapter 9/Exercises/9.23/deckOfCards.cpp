#include "deckOfCards.h"
#include "card.h"
#include <stdlib.h>
#include <time.h>

int DeckOfCards::currentCard = 0;

DeckOfCards::DeckOfCards(){
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

Card DeckOfCards::dealCard()const{
    return deck[currentCard++];
}

void DeckOfCards::print()const{
    size_t cardNo = 0;
    for( size_t i = 0 ; i < Card::suitStr.size() ; i++ ){
        for( size_t j = 0 ; j < Card::faceStr.size() ; j++ ){
            std::cout << cardNo << "." << deck[cardNo++].toString() << std::endl;
        }
    }
}

bool DeckOfCards::moreCards()const{
    if( currentCard > 51 ){
        return false;
    }
    else{
        return true;
    }
}

int DeckOfCards::getCurrentCard(){
    return currentCard;
}


