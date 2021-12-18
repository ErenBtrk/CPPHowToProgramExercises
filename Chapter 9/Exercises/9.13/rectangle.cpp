#include "coord.h"
#include "rectangle.h"
#include <stdexcept>
#include <iostream>

Rec::Rec(Coord &topLeft,Coord &bottomLeft,Coord &topRight,Coord &bottomRight){
    setRec(topLeft,bottomLeft,topRight,bottomRight);
    setLength();
    setWidth();
}

void Rec::setRec(Coord &tLeft,Coord &bLeft,Coord &tRight,Coord &bRight){
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


void Rec::displayCoords()const{
    std::cout << "TopLeft : " <<  topLeft.getX() << "," << topLeft.getY() << std::endl;
    std::cout << "BottomLeft : " <<  bottomLeft.getX() << "," << bottomLeft.getY() << std::endl;
    std::cout << "TopRight : " <<  topRight.getX() << "," << topRight.getY() << std::endl;
    std::cout << "BottomRight : " <<  bottomRight.getX() << "," << bottomRight.getY() << std::endl;
}

void Rec::setLength(){
    int topToTop = topRight.getX() - topLeft.getX() ;
    if( topToTop < 0 ){
        topToTop *= -1;
    }
    int topToBottom = topLeft.getY() - bottomLeft.getY() ;
    if( topToBottom < 0 ){
        topToBottom *= -1;
    }
    if( topToTop > topToBottom ){
        length = topToTop;
    }
    else{
        length = topToBottom;
    }
}

void Rec::setWidth(){
    int topToTop = topRight.getX() - topLeft.getX() ;
    if( topToTop < 0 ){
        topToTop *= -1;
    }
    int topToBottom = topLeft.getY() - bottomLeft.getY() ;
    if( topToBottom < 0){
        topToBottom *= -1;
    }
    if( topToTop < topToBottom ){
        width = topToTop;
    }
    else{
        width = topToBottom;
    }

}

int Rec::perimeter()const{
    return ( this->getLength() + this-> getWidth() ) * 2;
}

int Rec::area()const{
    return ( this->getLength() * this-> getWidth() ) ;
}

bool Rec::isRec()const{
    if( ( this->getLength() == this-> getWidth() ) ||  ( this->getLength() == 0 ) || ( this->getWidth() == 0 ) ){
        return false;
    }
    else{
        return true;
    }
}

bool Rec::isSquare()const{
    if( this->getLength() != this ->getWidth() ){
        return false;
    }
    else{
        return true;
    }
}


void Rec::assignMatrix(Coord &tL,Coord &bL,Coord &tR,Coord &bR){

    for( size_t i =0 ; i < arraySize ; i ++ ){
        for( size_t j = 0 ; j < arraySize ; j++ ){
            if( tL.getRow() == i && j <= tR.getColumn() && j >= tL.getColumn()  ){
                matrix[i][j] = 'o';
            }
            else if( bL.getRow() == i && j >= bL.getColumn() && j < bR.getColumn() ){
                matrix[i][j] = 'o';
            }
            else if( tR.getColumn() == j && i >= tR.getRow()  && i <= bR.getRow() ){
                matrix[i][j] = 'o';
            }
            else if( tL.getColumn() == j && i >= tL.getRow() && i < bL.getRow() ){
                matrix[i][j] = 'o';
            }
            else if( i == 12 || j == 12){
                matrix[i][j] = '.';
            }

            else{
                matrix[i][j] = ' ';
            }

        }

    }

}



void Rec::scale(int scale){


        topLeft.changeXandY(scale/2,TOP_LEFT);
        bottomLeft.changeXandY(scale/2,BOTTOM_LEFT);
        topRight.changeXandY(scale/2,TOP_RIGHT);
        bottomRight.changeXandY(scale/2,BOTTOM_RIGHT);

        setLength();
        setWidth();


        topLeft.setRowAndColumn();
        bottomLeft.setRowAndColumn();
        topRight.setRowAndColumn();
        bottomRight.setRowAndColumn();


}


int Rec::getLength()const{
    return length;
}

int Rec::getWidth()const{
    return width;
}

void Rec::draw()const{
    for( size_t i =0 ; i < arraySize ; i ++ ){
        for( size_t j = 0 ; j < arraySize ; j++ ){
                std::cout << matrix[i][j] << " " ;
        }
        std::cout << std::endl;
    }
}

void Rec::rotateRectangle(){
    char temp;
    size_t row = topLeft.getRow();
    size_t rowMax = bottomLeft.getRow();
    size_t column = topLeft.getColumn();
    size_t columnMax = topRight.getColumn();
    for(size_t i = row ; i <= rowMax ; i++){
        for( size_t j = column ; j <= columnMax ; j++){


                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;


        }
    }

}

Coord& Rec::getTopLeft(){
    return topLeft;
}

Coord& Rec::getBottomLeft(){
    return bottomLeft;
}

Coord& Rec::getTopRight(){
    return topRight;
}

Coord& Rec::getBottomRight(){
    return bottomRight;
}


