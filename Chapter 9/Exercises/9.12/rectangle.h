#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "coord.h"

class Rectangle{
public:
    Rectangle( Coord , Coord , Coord , Coord );
    void setRectangle( Coord , Coord , Coord , Coord );

    double length()const;
    double width()const;
    double perimeter()const;
    double area()const;

    bool isRectangle()const;

    void displayCoords()const;

private:
    Coord topLeft;
    Coord bottomLeft;
    Coord topRight;
    Coord bottomRight;

};


#endif // RECTANGLE_H_INCLUDED
