#include "rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(double w , double l){
    setWidth(w);
    setLength(l);
}

void Rectangle::setWidth(double w){
    if( w > 0.0 && w < 20.0 ){
        width = w;
    }
    else{
        throw std::invalid_argument("Width must be 0.0 - 20.0");
    }
}

void Rectangle::setLength(double l){
    if( l > 0.0 && l < 20.0 ){
        length = l;
    }
    else{
        throw std::invalid_argument("Length must be 0.0 - 20.0");
    }
}

double Rectangle::getWidth()const{
    return width;
}

double Rectangle::getLength()const{
    return length;
}

double Rectangle::perimeter()const{
    return ( getWidth() + getLength() ) * 2;
}

double Rectangle::area()const{
    return getWidth() * getLength();
}
