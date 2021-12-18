#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double hypotenuse(double,double);

int main(){
    double side1[3];
    double side2[3];

    for(int i = 0 ; i < 3 ; i++){
        cout << "Please enter " << i+1 << ".Triangle's 1.side : " << endl;
        cin >> side1[i];
        cout << "Please enter " << i+1 << ".Triangle's 2.side : " << endl;
        cin >> side2[i];
    }
        cout << setw(10) << "Triangle" << setw(10) << "Side 1"
                << setw(10) << "Side 2" << setw(12) << "Hypotenuse" << endl;
    for(int i = 0 ; i < 3 ; i++){
        cout << setw(10) << i+1 << setw(10) << side1[i] << setw(10) << side2[i]
                << setw(12) << hypotenuse(side1[i],side2[i]) << endl;
    }





    return 0;
}

double hypotenuse(double side1,double side2){
    return sqrt( pow(side1,2) + pow(side2,2) );
}
