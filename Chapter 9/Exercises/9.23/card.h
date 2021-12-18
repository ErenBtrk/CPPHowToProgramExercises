#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>
#include <array>

class Card{
public:
    Card();
    Card(size_t,size_t);
    std::string toString()const;

    void setFace(size_t);
    void setSuit(size_t);

    static const std::array < std::string , 13 > faceStr;
    static const std::array < std::string , 4 > suitStr;

private:


    size_t face;
    size_t suit;




};


#endif // CARD_H_INCLUDED
