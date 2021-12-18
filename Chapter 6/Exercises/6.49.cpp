#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;

inline double circleArea(double);

int main(){
    double radius = 0.0 ;
    cout << "Please enter radius : " << endl;
    cin >> radius ;
    cout << "Area of the circle is : " << circleArea(radius) << endl;






    return 0;
}

inline double circleArea(double radius){
    return PI*pow(radius,2);
}
