#include <iostream>
#include "rectangle.h"
#include "coord.h"

using namespace std;

int main()
{
    Coord topLeft(-2,3);
    Coord bottomLeft(-2,-4);
    Coord topRight(7,3);
    Coord bottomRight(7,-4);
    Rectangle r(topLeft,bottomLeft,topRight,bottomRight);
    r.displayCoords();
    if( r.isRectangle() ){
        cout << "Coords represent a rectangle." << endl;
        cout << "r rectangle's length : " << r.length() << endl;
        cout << "r rectangle's width : " << r.width() << endl;
        cout << "r rectangle's perimeter : " << r.perimeter() << endl;
        cout << "r rectangle's area : " << r.area() << endl;
    }
    else{
        cout << "Coords dont represent a rectangle." << endl;
    }




    return 0;
}
