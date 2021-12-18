#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "coord.h"

enum Sides{top_to_bottom , top_to_top};

class Rec{
public:
    Rec( Coord &, Coord &, Coord &, Coord & );
    void setRec( Coord &, Coord &, Coord &, Coord &);

    void setLength(); //setter function for length
    void setWidth(); //setter function for width
    int perimeter()const; // calculates perimeter of rectangle
    int area()const; // calculates perimeter of rectangle

    int getLength()const; //getter function for length
    int getWidth()const; //getter function for width
    Coord& getTopLeft();
    Coord& getBottomLeft();
    Coord& getTopRight();
    Coord& getBottomRight();

    bool isRec()const;
    bool isSquare()const;

    void displayCoords()const;

    void assignMatrix(Coord &,Coord &,Coord &,Coord &); // assigns the characters of x,y coordinate plane
    void draw()const; // draws coordinate plane

    void scale(int); // changes the size of rectangle
    void rotateRectangle(); // under construction





private:
    static const size_t arraySize = 25;
    char matrix[arraySize][arraySize] ={0};
    int length;
    int width;
    // coordinates of corners of rectangle
    Coord topLeft;
    Coord bottomLeft;
    Coord topRight;
    Coord bottomRight;



};


#endif // RECTANGLE_H_INCLUDED
