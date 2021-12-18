#include <iostream>
#include <math.h>

using namespace std;

double distanceBetweenPoints(double , double,double,double);

int main(){
    double x1= 0.0,x2 = 0.0,y1 = 0.0,y2 = 0.0;
        cout << "Please enter x coordinate of first point : " ;
        cin >> x1;
        cout << "Please enter y coordinate of first point : " ;
        cin >> y1;
        cout << "Please enter x coordinate of second point : " ;
        cin >> x2;
        cout << "Please enter y coordinate of second point : " ;
        cin >> y2;

        cout << "Distance between points is = " << distanceBetweenPoints(x1,y1,x2,y2);






    return 0;
}

double distanceBetweenPoints(double x1,double y1,double x2,double y2){

   return sqrt( pow(x1 - x2 , 2) + pow(y1 - y2 , 2) );

}
