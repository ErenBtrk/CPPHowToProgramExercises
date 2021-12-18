#include <iostream>

using namespace std;

int recursiveGcd(int,int);

int main(){
    int number1 = 0;
    int number2 = 0;

    cout << "Enter two numbers : " << endl;
    cin >> number1 >> number2 ;

    cout << "Greatest common divisor of these numbers is : " << recursiveGcd(number1,number2) ;





    return 0;
}

int recursiveGcd(int number1,int number2){
    if( number1 == number2 ){
        return number1;
    }
    else if( number1 > number2){
        return recursiveGcd(number1-number2,number2);
    }
    else{
        return recursiveGcd(number1,number2-number1);
    }


}
