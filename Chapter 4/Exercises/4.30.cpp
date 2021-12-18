#include <iostream>
#define PI 3.14159

using namespace std;

int main(){
    double radius = 0;
    cout << "Please enter the radius of the circle : " << endl;
    cin >> radius ;

    cout << "Diameter of the circle = " << 2 * radius << endl;
    cout << "Circumference of the circle = " << 2 * PI * radius << endl;
    cout << "Area of the circle = " <<  PI * radius * radius << endl;






    return 0;
}
