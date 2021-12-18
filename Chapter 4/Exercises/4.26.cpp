#include <iostream>
#include <math.h>

using namespace std;

bool isPalindrome(int);
int howManyDigits(int);

int main(){
    int number;
        cout << "Please enter a number : " << endl;
        cin >> number;
        if(isPalindrome(number)){
            cout << "The number is a palindrome." << endl;
        }
        else{
            cout << "The number is not a palindrome." << endl;
        }





    return 0;
}

int howManyDigits(int number){
    int counter=0;
    while( number > 0){
        number /=10;
        counter++;
    }
    return counter;
}

bool isPalindrome(int number){
    int temp=number;
    int remainder = 0;
    int inverseNumber = 0;
    int counter = 0;
    while ( counter < howManyDigits(number) ){
        remainder = temp % 10;
        inverseNumber += remainder * pow(10,howManyDigits(number) - 1 - counter);
        temp /= 10;
        counter++;
    }
    if(inverseNumber == number ){
        return true;
    }
    else{
        return false;
    }
}
