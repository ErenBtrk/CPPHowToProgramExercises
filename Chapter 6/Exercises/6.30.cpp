#include <iostream>
#include <math.h>

using namespace std;

int howManyDigits(int);
int reverseNumber(int);

int main(){
    int number = 0;
    cout << "Please enter a number : " ;
    cin >> number ;
    cout << "Reverse : " << endl;
    cout << reverseNumber(number);





    return 0;
}

int howManyDigits(int number){
    int counter = 0;
    while(number > 0){
        number /= 10;
        counter++;
    }
    return counter;
}

int reverseNumber(int number){
    int newNumber = 0;
    int counter = howManyDigits(number)-1;
    while(counter >= 0){
        newNumber += (number % 10) * pow(10,counter);
        number /= 10;
        counter--;
    }
    return newNumber;

}
