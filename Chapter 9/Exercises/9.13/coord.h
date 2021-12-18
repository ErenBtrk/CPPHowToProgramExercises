#ifndef COORD_H_INCLUDED
#define COORD_H_INCLUDED
#include <iostream>

enum Quadrant{fQuadrant = 1 , sQuadrant , tQuadrant , foQuadrant,xLine,_xLine,yLine,_yLine,Origin};
enum Corners{TOP_LEFT = 1,BOTTOM_LEFT,TOP_RIGHT,BOTTOM_RIGHT};

class Coord{
public:
    explicit Coord(int x = 0 , int y = 0);
    void setX(int x);
    void setY(int y);
    void setRowAndColumn();
    void changeXandY(int , Corners);


    int getX()const;
    int getY()const;
    size_t getRow()const;
    size_t getColumn()const;

    Quadrant whichQuadrant()const;


private:
    int x;
    int y;
    size_t row;
    size_t column;

};


#endif // COORD_H_INCLUDED
