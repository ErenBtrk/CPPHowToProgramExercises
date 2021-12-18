#include <iostream>

using namespace std;

int integerPower(int,int);

int main(){
    int number = 0;
    int exponent = 0;
    cout << "Please enter a number : " << endl;
    cin >> number ;
    cout << "Please enter a power : " << endl;
    cin >> exponent ;
    cout << number << "^" << exponent << " = " << integerPower(number,exponent) << endl;





    return 0;
}

int integerPower(int base,int exponent){
    if(exponent == 0){
        return 1;
    }
    int total = 1;
    for(int i = 0 ; i < exponent ; i++){
        total *= base;
    }
    return total;
}
