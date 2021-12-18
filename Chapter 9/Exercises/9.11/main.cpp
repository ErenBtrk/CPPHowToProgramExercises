#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    Rectangle r;
    cout << "r Rectangle's perimeter : " << r.perimeter() << endl;
    cout << "r Rectangle's area : " << r.area() << endl;
    Rectangle r1(5,10);
    cout << "r1 Rectangle's perimeter : " << r1.perimeter() << endl;
    cout << "r1 Rectangle's area : " << r1.area() << endl;
    Rectangle r2(30,21);
    cout << "r2 Rectangle's perimeter : " << r2.perimeter() << endl;
    cout << "r2 Rectangle's area : " << r2.area() << endl;


}
