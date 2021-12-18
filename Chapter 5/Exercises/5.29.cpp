#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double principal = 24.00 ;
    double rate = 0.05;
    long double amount = 0.0;

    for(int i = 1 ; i <= 2 ; i++,rate+=0.05){
            cout << "RATE = " << rate << endl;
            cout << setw(10) << "Year" << setw(30) << "Amount" << endl;
        for(int year = 1626 ,expo = 1 ; year <=2020 ; year++,expo++){
            amount = principal * pow(1.0 + rate,expo);
            cout << setw(10) << year << setw(30) << setprecision(2) << fixed << amount << " $ " << endl;
        }
    }





    return 0;
}
