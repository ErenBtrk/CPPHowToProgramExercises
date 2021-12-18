#include "cardDealer.h"
#include "deckOfCards.h"
#include "combination.h"
#include <string.h>

CardDealer::CardDealer(DeckOfCards &d):deck(d){

    deck.shuffle();
    for(int i = 0 ; i < 5 ; i++ ){
        Card c = deck.dealCard();
        cardDealersHand.setCard( c );
        eightCardPool.push_back(c);
    }
    cardDealersHand.setValues();

    cardDealersHand.setHide(false);
    getCombination(combinationIndex,3);
}

void CardDealer::displayCardDealersHand()const{
    cardDealersHand.displayCards();
}

void CardDealer::toString()const{
    std::cout << cardDealersHand.toString() << std::endl;
}

Player CardDealer::getCardDealersHand()const{
    return cardDealersHand;
}

void CardDealer::drawCard(){
    Card c = deck.dealCard();
    eightCardPool.push_back(c);
    std::cout << "Computer drew a card : " ;
    std::cout << c.toString() << std::endl;
}



void CardDealer::displayEightCardPool()const{
    for( size_t i = 0 ; i < eightCardPool.size() ; i++ ){
        std::cout << eightCardPool[i].toString() << std::endl;
    }
}

void CardDealer::findBestHand(){

    Player bestHand = this->cardDealersHand;


   for( size_t i = 0 ; i < combinationIndex.size() ; i++ ){
        Player p;
        for( size_t j = 0 ; j < 5 ; j++){
            Card temp;
            temp.setFace(eightCardPool[  (int)combinationIndex[i][j] - 48 ].getFace());
            temp.setSuit(eightCardPool[ (int)combinationIndex[i][j] - 48  ].getSuit());

            p.setCard(temp);


        }
        if(p.compareHands(bestHand) == 1){
            p.setValues();
            bestHand = p;
        }
        p.clearVector();
   }
    this->cardDealersHand = bestHand;
    cardDealersHand.setHide(false);

}


void CardDealer::displayCardDealersHandValues(){
    cardDealersHand.displayValues();
}
