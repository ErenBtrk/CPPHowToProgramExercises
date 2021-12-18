#include "rectangle.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle(Point a,Point b,Point c,Point d,char fillChar,char perimeterChar){
    setCoord(a,b,c,d);
    setFillCharacter( fillChar );
    setPerimeterCharacter( perimeterChar );
}

void Rectangle::setCoord( Point p1,Point p2,Point p3,Point p4){
    if( (p1.getY() == p2.getY() && p1.getX() == p4.getX() && p2.getX() == p3.getX() && p3.getY() == p4.getY() ) ){
        point1 = p1;
        point2= p2;
        point3 = p3;
        point4 = p4;
    }
    else{
        cout << "Coordinates do not form a rectangle\n" << "Use default values.\n";
        point1= Point(0.0,1.0);
        point2=Point(1.0,1.0);
        point3 = Point(1.0,0.0);
        point4= Point(0.0,0.0);
    }
}

double Rectangle::length(){
    double side1 = fabs(point4.getY() - point1.getY() );

    double side2 = fabs(point2.getX() - point1.getX() );
    double length = ( side1 > side2 ? side1 : side2 );
    return length;
}

double Rectangle::width(){
    double side1 = fabs(point4.getY() - point1.getY() );

    double side2 = fabs(point2.getX() - point1.getX() );
    double length = ( side1 < side2 ? side1 : side2 );
    return length;
}

void Rectangle::perimeter(){
    cout << fixed << "\nThe perimeter is :" << setprecision(1) << 2*(length() + width( ) ) << endl;
}

void Rectangle::area(){
    cout << fixed << "\nThe area is :" << setprecision(1) << length() * width( )  << endl;
}

bool Rectangle::square(){
    return ( fabs(point4.getY() - point1.getY() ) == fabs (point2.getX() - point1.getX() ) );
}

void Rectangle::draw(){
    for(double y = 25.0 ; y >= 0.0 ; y -- ){
        for(double x = 0.0 ; x <= 25.0 ; x++){
            if( ( point1.getX() == x && point1.getY() == y ) || (point4.getX() == x && point4.getY() == y ) ){
                while( x <= point2.getX() ){
                    cout << perimeterCharacter ;
                    x++;
                }
                cout << '.' ;
            }
            else if( ((x <= point4.getX() && x >= point1.getX() ) ) && point4.getY() >= y && point1.getY() <= y){
                cout << perimeterCharacter;
                for(x++;x<point2.getX(); ){
                    cout << fillCharacter;
                    x++;
                }
                cout << perimeterCharacter;
            }
            else{
                cout << '.';
            }
        }
        cout << endl;
    }
}

void Rectangle::setFillCharacter(char fillChar){
    fillCharacter = fillChar;
}

void Rectangle::setPerimeterCharacter(char perimeterChar){
    perimeterCharacter = perimeterChar;
}
