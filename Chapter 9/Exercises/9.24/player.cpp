#include "player.h"
#include "card.h"
#include <iomanip>
#include <algorithm>

const std::array < std::string , 10 > Player::handNames = {"HIGH_HAND" , "PAIR", "TWO_PAIRS" , "THREE_OF_A_KIND" ,
                                                                                             "STRAIGHT" ,"FLUSH" , "FULL_HOUSE" , "FOUR_OF_A_KIND",
                                                                                             "STRAIGHT_FLUSH" , "ROYAL_FLUSH"};

Player::Player():faceFrequency{0},suitFrequency{0},highest(0),suitOfHighest(0),firstPair(0),
                        secondPair(0),highestOfPairs(0),lowestOfPairs(0),highestNonPair(0),
                        suitOfHighestNonPair(0),triplet(0),quart(0),theFive(0),hide(false){}

void Player::setCard(Card &c){
    playerCards.push_back(c);
    faceFrequency[ c.getFace() + 2 ]++;
    suitFrequency[ c.getSuit() ]++;
    sortCards();
    setValues();
}

void Player::displayCards()const{
        if( hide ){
             for( size_t i = 0 ; i < playerCards.size() ; i++){
                std::cout << i+1 << ".Card = HIDDEN" << std::endl;
            }
        std::cout << std::endl;
        }
        else{
             for( size_t i = 0 ; i < playerCards.size() ; i++){
                std::cout << i+1 << ".Card = " << playerCards[i].toString() << std::endl;
            }
        std::cout << std::endl;
        }

}





bool Player::highHand()const{
    bool flag = true;


    if( straight() || flush() || straightFlush() || royalFlush() ){
        return false;
    }

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i] > 1 ){
            flag = false;
            break;
        }
    }
    return flag;
}

bool Player::onePair()const{
    int counter = 0;

    if( fullHouse() ){
        return false;
    }

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i]  == 2 ){
            counter++;
        }
    }
    if( counter == 1 ){
        return true;
    }
    else{
        return false;
    }

}

bool Player::twoPairs()const{
    int counter = 0;

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i]  == 2 ){
            counter++;
        }
    }
    if( counter == 2 ){
        return true;
    }
    else{
        return false;
    }

}

bool Player::threeOfAKind()const{
     bool flag = false;
     size_t index = 0;

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i]  == 3 ){
            flag = true;
            index = i;
            break;
        }
    }
    for( size_t i = 2 ; i < 15 ; i++ ){
        if( i == index ){
            continue;
        }
        if( faceFrequency[i]  > 1 ){
            flag = false;
            break;
        }
    }

    return flag;


}

void Player::sortCards(){
    sortedCards.clear();
    for( size_t i = 0 ; i < playerCards.size() ; i++ ){
        sortedCards.push_back( playerCards[i].getFace() +2 );
    }
    sort( sortedCards.begin() , sortedCards.end() );
}

bool Player::straight()const{
    bool flag = true;

    if( straightFlush() || royalFlush() ){
        return false;
    }

    for( size_t i = 0 ; i < playerCards.size() - 1 ; i++ ){
        if( sortedCards[i+1] - sortedCards[i] != 1){
            flag = false;
            break;
        }
    }
    return flag;
}

bool Player::flush()const{
    bool flag = false;
    for( size_t i = 0 ; i < suitFrequency.size() ; i++ ){
        if( suitFrequency[i] == 5 ){
            flag = true;
            break;
        }
    }

    bool flag2 = true;
        for( size_t i = 0 ; i < playerCards.size() - 1 ; i++ ){
            if( ( sortedCards[i+1] - sortedCards[i] ) != 1){
                flag2 = false;
                break;
            }
        }

    if( flag == true && flag2 == false ){
        return true;
    }
    else{
        return false;
    }
}

bool Player::fullHouse()const{
     bool flag = false;
     size_t index = 0;

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i]  == 3 ){
            flag = true;
            index = i;
            break;
        }
    }


        bool flag2 = false;
        for( size_t i = 2 ; i < 15 ; i++ ){
            if( i == index ){
                continue;
            }
            if( faceFrequency[i]  == 2 ){
                flag2 = true;
                break;
            }
        }

    if( flag == true && flag2 == true){
        return true;
    }
    else{
        return false;
    }
}

bool Player::fourOfAKind()const{
    bool flag = false;

    for( size_t i = 2 ; i < 15 ; i++ ){
        if( faceFrequency[i]  == 4 ){
            flag = true;
            break;
        }
    }
    return flag;
}

bool Player::straightFlush()const{
    bool flag = false;
    for( size_t i = 0 ; i < suitFrequency.size() ; i++ ){
        if( suitFrequency[i] == 5 ){
            flag = true;
            break;
        }
    }

    bool flag2 = true;
        for( size_t i = 0 ; i < playerCards.size() - 1 ; i++ ){
            if( ( sortedCards[i+1] - sortedCards[i] ) != 1){
                flag2 = false;
                break;
            }
        }

    bool flag3 = false;
    int total = 0;
        for ( size_t i = 0 ; i < playerCards.size() ; i++ ){
            total += playerCards[i].getFace() + 2;
        }
    if( total == 60 ){
        flag3 = true;
    }

    if( flag == true && flag2 == true && flag3 == false){
        return true;
    }
    else{
        return false;
    }
}

bool Player::royalFlush()const{
    bool flag = false;
    for( size_t i = 0 ; i < suitFrequency.size() ; i++ ){
        if( suitFrequency[i] == 5 ){
            flag = true;
            break;
        }
    }

    bool flag2 = true;
        for( size_t i = 0 ; i < playerCards.size() - 1 ; i++ ){
            if( sortedCards[i+1] - sortedCards[i] != 1){
                flag2 = false;
                break;
            }
        }

    bool flag3 = false;
    int total = 0;
        for ( size_t i = 0 ; i < playerCards.size() ; i++ ){
            total += playerCards[i].getFace() + 2;
        }
    if( total == 60 ){
        flag3 = true;
    }

    if( flag == true && flag2 == true && flag3 == true){
        return true;
    }
    else{
        return false;
    }
}


void Player::setFaceFreq(){
    for( size_t i = 0 ; i < 15 ; i++ ){
        faceFrequency[i]  = 0;
    }
    for( size_t i = 0 ; i < playerCards.size() ; i++ ){
        faceFrequency[ playerCards[i].getFace() +2 ]++;
    }
}

void Player::setSuitFreq(){
    for( size_t i = 0 ; i < 4 ; i++ ){
        suitFrequency[i] = 0;
    }
    for( size_t i = 0 ; i < playerCards.size() ; i++ ){
        suitFrequency[ playerCards[i].getSuit() ]++;
    }
}

void Player::displaySortedCards(){
    for( size_t i = 0 ; i < playerCards.size() ; i ++){
        std::cout << sortedCards[i] << " " ;
    }
    std::cout << std::endl;
}

Hands Player::determineHand()const{

    if( highHand() ){
        return HIGH_HAND;
    }
    else if( onePair() ){
        return PAIR;
    }
    else if( twoPairs() ){
        return TWO_PAIRS;
    }
    else if( threeOfAKind() ){
        return THREE_OF_A_KIND;
    }
    else if( straight() ){
        return STRAIGHT;
    }
    else if( flush() ){
        return FLUSH;
    }
    else if( fullHouse() ){
        return FULL_HOUSE;
    }
    else if( fourOfAKind() ){
        return FOUR_OF_A_KIND;
    }
    else if( straightFlush() ){
        return STRAIGHT_FLUSH;
    }
    else if( royalFlush() ){
        return ROYAL_FLUSH;
    }
}

void Player::setValues(){

    switch( determineHand() ){
    case HIGH_HAND:
        for( size_t i = 0 ; i < playerCards.size() ; i++ ){
            if( playerCards[i].getFace()+2 > highest ){
                highest = playerCards[i].getFace() + 2;
                suitOfHighest = playerCards[i].getSuit();
            }
            else if( playerCards[i].getFace()+2 == highest ){
                if(playerCards[i].getSuit() > suitOfHighest){
                    suitOfHighest = playerCards[i].getSuit();
                }
            }
        }
    break;
    case PAIR:
        for( size_t i = 0 ; i < playerCards.size() ; i++ ){
            if( playerCards[i].getFace()+2 > highest ){
                highest = playerCards[i].getFace() + 2;
                suitOfHighest = playerCards[i].getSuit();
            }
            else if( playerCards[i].getFace()+2 == highest ){
                if(playerCards[i].getSuit() > suitOfHighest){
                    suitOfHighest = playerCards[i].getSuit();
                }
            }
        }
        for( size_t i = 2 ; i < 15 ; i++ ){
            if( faceFrequency[i] == 2 ){
                highestOfPairs = i;
            }
            if( faceFrequency[i] == 1 && i > highestNonPair ){
                highestNonPair = i;
            }
        }
         for( size_t j = 0 ; j < playerCards.size() ; j++ ){
            if( highestNonPair - 2 == playerCards[j].getFace() ){
                        suitOfHighestNonPair = playerCards[j].getSuit();
            }
        }
        break;
        case TWO_PAIRS:
            for( size_t i = 2 ; i < 15 ; i++ ){
                if( faceFrequency[i]  == 2 ){
                    firstPair = i;
                    break;
                }
            }
            for( size_t i = 2 ; i < 15 ; i++ ){
                if(firstPair == i){
                    continue;
                }
                if(faceFrequency[i] == 2 ){
                    secondPair = i;
                    break;
                }
            }
            if(firstPair > secondPair){
                highestOfPairs = firstPair;
                lowestOfPairs = secondPair;
            }
            else{
                highestOfPairs = secondPair;
                lowestOfPairs = firstPair;
            }
            for( size_t i = 2 ; i < 15 ; i++ ){
                if(firstPair == i || secondPair == i){
                    continue;
                }
                if(faceFrequency[i] == 1 ){
                    highestNonPair = i;
                    break;
                }
            }
            for( size_t j = 0 ; j < playerCards.size() ; j++ ){
                if( highestNonPair - 2 == playerCards[j].getFace() ){
                        suitOfHighestNonPair = playerCards[j].getSuit();
                }
            }
            break;
        case THREE_OF_A_KIND:
            for( size_t i = 2 ; i < 15 ; i++ ){
                if( faceFrequency[i]  == 3 ){
                    triplet = i;
                    break;
                }
            }
            break;
        case STRAIGHT:
            for( size_t i = 0 ; i < playerCards.size() ; i++ ){
                if( playerCards[i].getFace() > highest ){
                    highest = playerCards[i].getFace() + 2;
                }
            }
            break;
        case FLUSH:
            suitOfHighest = playerCards[0].getSuit();
            break;
        case FULL_HOUSE:
            for( size_t i = 2 ; i < 15 ; i++ ){
                if( faceFrequency[i]  == 3 ){
                    triplet = i;
                    break;
                }
            }
            break;
        case FOUR_OF_A_KIND:
            for( size_t i = 2 ; i < 15 ; i++ ){
                if( faceFrequency[i]  == 4 ){
                    quart = i;
                    break;
                }
            }
            break;
        case STRAIGHT_FLUSH:
            for( size_t i = 0 ; i < playerCards.size() ; i++ ){
                if(playerCards[i].getFace() + 2 > highest ){
                    highest = playerCards[i].getFace() + 2;
                }
            }
            suitOfHighest = playerCards[0].getSuit();
            break;
        case ROYAL_FLUSH:
            suitOfHighest = playerCards[0].getSuit();
            break;
        default:
            break;
    }

}


int Player::compareHands(Player &p)const{
    Hands player1 = this->determineHand();
    Hands player2 = p.determineHand();

    if( player1 > player2 ){
        return 1;
    }
    else if( player2 > player1 ){
        return 2;
    }
    else{
        switch(player1){
            case HIGH_HAND:
                if( this->highest > p.highest){
                    return 1;
                }
                else if( p.highest > this->highest ){
                    return 2;
                }
                else{
                    if( this->suitOfHighest > p.suitOfHighest){
                        return 1;
                    }
                    else{
                        return 2;
                    }
                }
                break;
            case PAIR:
                if( this->highestOfPairs > p.highestOfPairs ){
                    return 1;
                }
                else if( p.highestOfPairs > this->highestOfPairs ){
                    return 2;
                }
                else{
                    if( this->highestNonPair > p.highestNonPair ){
                        return 1;
                    }
                    else if( p.highestNonPair > this->highestNonPair ){
                        return 2;
                    }
                    else{
                        if( this->suitOfHighestNonPair > p.suitOfHighestNonPair ){
                            return 1;
                        }
                        else if( p.suitOfHighestNonPair > this->suitOfHighestNonPair ){
                            return 2;
                        }
                    }
                }
                break;
            case TWO_PAIRS:
                if( this->highestOfPairs > p.highestOfPairs ){
                    return 1;
                }
                else if( p.highestOfPairs > this->highestOfPairs ){
                    return 2;
                }
                else{
                    if( this->lowestOfPairs > p.lowestOfPairs ){
                        return 1;
                    }
                    else if( p.lowestOfPairs > this->lowestOfPairs ){
                        return 2;
                    }
                    else{
                        if( this->highestNonPair > p.highestNonPair ){
                            return 1;
                        }
                        else if( p.highestNonPair > this->highestNonPair ){
                            return 2;
                        }
                        else{
                            if( this->suitOfHighestNonPair > p.suitOfHighestNonPair ){
                                return 1;
                            }
                            else{
                                return 2;
                            }
                        }
                    }
                }
                break;
            case THREE_OF_A_KIND:
                if( this->triplet > p.triplet ){
                    return 1;
                }
                else{
                    return 2;
                }
                break;
            case STRAIGHT:
                if( this->highest > p.highest ){
                    return 1;
                }
                else if( p.highest > this->highest ){
                    return 2;
                }
                else{
                    return 0;
                }
                break;
            case FLUSH:
                if( this->suitOfHighest > p.suitOfHighest ){
                    return 1;
                }
                else{
                    return 2;
                }
                break;
            case FULL_HOUSE:
                if( this->triplet > p.triplet ){
                    return 1;
                }
                else{
                    return 2;
                }
                break;
            case FOUR_OF_A_KIND:
                if( this->quart > p.quart ){
                    return 1;
                }
                else{
                    return 2;
                }
                break;
            case STRAIGHT_FLUSH:
                if( this->highest > p.highest ){
                    return 1;
                }
                else if( p.highest > this->highest ){
                    return 2;
                }
                else{
                    if( this->suitOfHighest > p.suitOfHighest ){
                        return 1;
                    }
                    else{
                        return 2;
                    }
                }
                break;
            case ROYAL_FLUSH:
                if(this->suitOfHighest > p.suitOfHighest ){
                    return 1;
                }
                else{
                    return 2;
                }
                break;
        }
    }
}

std::string Player::toString()const{
    return handNames.at( determineHand() );
}

void Player::setHide(bool hide){
    this->hide = hide;
}

void Player::clearVector(){
    playerCards.clear();
}

void Player::drawCard(Card &c){
    playerCards.push_back(c);
    faceFrequency[ c.getFace() + 2 ]++;
    suitFrequency[ c.getSuit() ]++;
    sortCards();
    setValues();

}

void Player::dropCard(size_t index){
    faceFrequency[ playerCards[index].getFace() +2 ] --;
    suitFrequency[ playerCards[index].getSuit() ] --;
    playerCards.erase(playerCards.begin()+index);
    sortCards();
    setValues();
}

void Player::displayValues()const{
    std::cout << "Highest card = " << highest << std::endl;
    std::cout << "Suit of highest card = " << suitOfHighest << std::endl;
    std::cout << "First pair= " << firstPair << std::endl;
    std::cout << "Second pair = " << secondPair << std::endl;
    std::cout << "Highest of pairs = " << highestOfPairs << std::endl;
    std::cout << "Lowest of pairs = " << lowestOfPairs << std::endl;
    std::cout << "Highest non pair = " << highestNonPair << std::endl;
    std::cout << "Suit of highest non pair = " << suitOfHighestNonPair << std::endl;
    std::cout << "Triplet = " << triplet << std::endl;
    std::cout << "Quart = " << quart << std::endl;
    std::cout << "The five = " << theFive << std::endl;
    std::cout << "Total card values = " << totalCardValues << std::endl;


}
