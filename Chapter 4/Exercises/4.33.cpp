#include <iostream>

using namespace std;

int main(){
    double a = 0 , b = 0 , hypotenuse = 0 ;
    cout << "Please enter the first side of a right triangle : " << endl;
    cin >> a  ;
    cout << "Please enter the second side of a right triangle : " << endl;
    cin >> b ;
    cout << "Please enter the hypotenuse of a right triangle : " << endl;
    cin >> hypotenuse ;
    if(hypotenuse * hypotenuse == a * a + b * b){
        cout << "These sides do represent a right triangle." << endl;
    }
    else{
        cout << "These sides dont represent a right triangle." << endl;
    }






    return 0;
}
