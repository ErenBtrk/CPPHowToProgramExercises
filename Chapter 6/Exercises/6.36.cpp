#include <iostream>

using namespace std;

int powerRecursive(int,int);

int main(){
    int number = 0;
    int power = 0;
    cout << "Enter a number : " << endl;
    cin >> number;
    cout << "Enter the number's power : " << endl;
    cin >> power;
    cout << number << "^" << power << " = " << powerRecursive(number,power) << endl;






    return 0;
}

int powerRecursive(int base,int exponent){
    if(exponent == 1){
        return base;
    }
    return base * powerRecursive(base,exponent-1);

}

