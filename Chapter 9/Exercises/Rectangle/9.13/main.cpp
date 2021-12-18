#include <iostream>
#include "rectangle.h"

int main()
{
    Point point1(0.0,2.0);
    Point point2(2.0,2.0);
    Point point3(2.0,0.0);
    Point point4(0.0,0.0);
    Rectangle rectangle (point1,point2,point3,point4,'$','#');
    rectangle.draw();
    system("pause");
	return 0;
}
