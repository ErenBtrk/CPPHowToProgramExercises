#include "card.h"
#include <iostream>
#include <array>

const std::array<std::string, 4> Card::suitStr = {"Spades", "Hearts", "Diamonds", "Clubs"};
const std::array<std::string, 13> Card::faceStr = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
                                                                                "Nine", "Ten", "Jack", "Queen", "King", "Ace" };
Card::Card(){}

Card::Card(size_t face,size_t suit){
    setFace(face);
    setSuit(suit);
}

void Card::setFace(size_t face){
    this->face = face;
}

void Card::setSuit(size_t suit){
    this->suit = suit;
}

std::string Card::toString()const{
    return faceStr.at(face) + " of " + suitStr.at(suit);
}

size_t Card::getFace()const{
    return face;
}

size_t Card::getSuit()const{
    return suit;
}
