#include <iostream>

using namespace std;

int main(){
    double a = 0, b = 0 , c = 0;
    cout << "Please enter the sides of a triangle : " << endl;
    cin >> a >> b >> c ;
        if( (a + b > c) && (a + c > b) && (b +c > a)){
            cout << "These sides do represent a triangle." << endl;
        }
        else{
            cout << "These sides dont represent a triangle." << endl;
        }




    return 0;
}
