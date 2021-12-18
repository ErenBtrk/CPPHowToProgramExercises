#include "coord.h"
#include "rectangle.h"
#include <stdexcept>
#include <iostream>

Rectangle::Rectangle(Coord topLeft,Coord bottomLeft,Coord topRight,Coord bottomRight){
    setRectangle(topLeft,bottomLeft,topRight,bottomRight);
}

void Rectangle::setRectangle(Coord tLeft,Coord bLeft,Coord tRight,Coord bRight){
    if( (  tLeft.getX() > 20.0 ) || ( tLeft.getY() > 20.0 ) ||
        (  bLeft.getX() > 20.0 ) || (  bLeft.getY() > 20.0 ) ||
        (  tRight.getX() > 20.0 ) || ( tRight.getY() > 20.0 ) ||
        (  bRight.getX() > 20.0 ) || ( bRight.getY() > 20.0 ) ) {
            throw std::invalid_argument("x and y must be larger than 0.0 and smaller than 20.0");
    }
    if( ( tLeft.getY() != tRight.getY() ) || ( bLeft.getY() != bRight.getY() ) ||
        ( tLeft.getX() != bLeft.getX() ) || ( tRight.getX() != bRight.getX() ) ){
        throw std::invalid_argument("Coordinates do not match");
    }
    else{
        this->topLeft = tLeft;
        this->bottomLeft = bLeft;
        this->topRight = tRight;
        this->bottomRight = bRight;
    }


}


void Rectangle::displayCoords()const{
    std::cout << "TopLeft : " <<  topLeft.getX() << "," << topLeft.getY() << std::endl;
    std::cout << "BottomLeft : " <<  bottomLeft.getX() << "," << bottomLeft.getY() << std::endl;
    std::cout << "TopRight : " <<  topRight.getX() << "," << topRight.getY() << std::endl;
    std::cout << "BottomRight : " <<  bottomRight.getX() << "," << bottomRight.getY() << std::endl;
}

double Rectangle::length()const{
    double topToTop = topRight.getX() - topLeft.getX() ;
    if( topToTop < 0 ){
        topToTop *= -1;
    }
    double topToBottom = topLeft.getY() - bottomLeft.getY() ;
    if( topToBottom < 0 ){
        topToBottom *= -1;
    }
    if( topToTop > topToBottom ){
        return topToTop;
    }
    else{
        return topToBottom;
    }
}

double Rectangle::width()const{
    double topToTop = topRight.getX() - topLeft.getX() ;
    if( topToTop < 0 ){
        topToTop *= -1;
    }
    double topToBottom = topLeft.getY() - bottomLeft.getY() ;
    if( topToBottom < 0){
        topToBottom *= -1;
    }
    if( topToTop < topToBottom ){
        return topToTop;
    }
    else{
        return topToBottom;
    }

}

double Rectangle::perimeter()const{
    return ( this->length() + this-> width() ) * 2;
}

double Rectangle::area()const{
    return ( this->length() * this-> width() ) ;
}

bool Rectangle::isRectangle()const{
    if( ( this->length() == this-> width() ) ||  ( this->length() == 0 ) || ( this->width() == 0 ) ){
        return false;
    }
    else{
        return true;
    }
}
