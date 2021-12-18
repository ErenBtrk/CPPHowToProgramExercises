#include <iostream>

using namespace std;

int gcd(int , int);

int main(){
    int number1 = 0;
    int number2 = 0;
    cout << "Please enter two numbers : " << endl;
    cin >> number1 >> number2;
    cout << "Greatest common divisor of both numbers is = " << gcd(number1,number2) << endl;






    return 0;
}

int gcd(int number1,int number2){
    /*
    if(number1 % number2 == 0){
        return number2;
    }
    else if(number2 % number1 == 0){
        return number1;
    }
    else{
        int smallerNum = 0;
        int largerNum = 0;
            if(number1 > number2 ){
                smallerNum = number2;
                largerNum= number1;
            }
            else{
                smallerNum = number1;
                largerNum=number2;
            }

        int counter = 1;
        int largestDivisor = 1;

            while( counter <= smallerNum ){
                if( smallerNum % counter == 0 && largerNum % counter == 0){
                    largestDivisor = counter;
                }
                counter++;
            }
        return largestDivisor ;
    }
}
    */

     //euclidean algorithm
        while ( number1 != number2){
            if(number1 > number2){
                number1 -= number2;
            }
            else if( number2 > number1){
                number2 -= number1;
            }
        }
        return number1;
}

