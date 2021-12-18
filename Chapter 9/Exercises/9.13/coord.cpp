#include "coord.h"

Coord::Coord(int x,int y){
    setX(x);
    setY(y);
    setRowAndColumn();
}

void Coord::setX(int x){
    this->x = x;
}

void Coord::setY(int y){
    this->y = y;
}

int Coord::getX()const{
    return x;
}

int Coord::getY()const{
    return y;
}

Quadrant Coord::whichQuadrant()const{
        if( getX() > 0 && getY() > 0 ){
            return fQuadrant;
        }
        if( getX() < 0  && getY() > 0 ){
            return sQuadrant;
        }
        if( getX() < 0  && getY() < 0 ){
            return tQuadrant;
        }
        if( getX() > 0  && getY() < 0 ){
            return foQuadrant;
        }
        if( getX() == 0 && getY() > 0 ){
            return yLine;
        }
        if( getX() == 0 && getY() < 0 ){
            return _yLine;
        }
        if( getY() == 0 && getX() > 0){
            return xLine;
        }
        if( getY() == 0 && getX() < 0){
            return _xLine;
        }
        if( getX() == 0 && getY() == 0){
            return Origin;
        }
}

void Coord::setRowAndColumn(){
    switch ( whichQuadrant() ){
        case fQuadrant:
            row = 12 - getY();
            column = 12 + getX()  ;
            break;
        case sQuadrant:
            row = 12 - getY();
            column = 12 - ( getX() * -1 ) ;
            break;
        case tQuadrant:
            row = 12 + ( getY() * -1 );
            column = 12 - ( getX() * -1 );
            break;
        case foQuadrant:
            row = 12 + ( getY() * -1 );
            column = 12 + getX();
            break;
        case xLine:
            row = 12;
            column = 12 + getX();
            break;
        case _xLine:
            row = 12;
            column = 12 - ( getX() * -1);
            break;
        case yLine:
            row = 12 - getY();
            column = 12;
            break;
        case _yLine:
            row = 12  + ( getY() * -1 );
            column = 12;
            break;
        case Origin:
            row = 12;
            column = 12;
            break;
    }

}



void Coord::changeXandY(int scale,Corners corner){

        switch ( corner ){
        case TOP_LEFT:
            setX( getX() - scale );
            setY( getY() + scale );
            break;
        case BOTTOM_LEFT:
            setX( getX() - scale );
            setY( getY() - scale );
            break;
        case TOP_RIGHT:
            setX( getX() + scale );
            setY( getY() + scale );
            break;
        case BOTTOM_RIGHT:
            setX( getX() +  scale );
            setY( getY() - scale );
            break;
        }



}




size_t Coord::getRow()const{
    return row;
}

size_t Coord::getColumn()const{
    return column;
}
