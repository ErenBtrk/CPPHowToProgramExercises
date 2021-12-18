#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"

class Rectangle{
public:
    Rectangle(Point = Point (0.0,1.0) , Point = Point(1.0,1.0) , Point = Point(1.0,0.0) , Point = Point(0.0,0.0) ,
                      char fillCharacter = ' ',char perimeterCharacter=' '  );


    void setCoord(Point,Point,Point,Point);
    double length();
    double width();
    void perimeter();
    void area();
    bool square();
    void draw();
    void setPerimeterCharacter(char);
    void setFillCharacter(char);
private:
    Point point1;
    Point point2;
    Point point3;
    Point point4;
    char fillCharacter;
    char perimeterCharacter;
};

#endif // RECTANGLE_H
