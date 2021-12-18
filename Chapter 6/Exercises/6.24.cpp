#include <iostream>
#include <math.h>

using namespace std;

int howManyDigits(int);
void separateDigits(int);

int main(){
    int number = 0;
    cout << "Please enter a number : " ;
    cin >> number ;
    separateDigits(number);






    return 0;
}

int howManyDigits(int number){
    int counter = 0;
    while(number > 0){
        number /= 10;
        counter ++ ;
    }
    return counter ;
}

void separateDigits(int number){

    int digit = 0;
    int counter = howManyDigits(number)-1;
    while(counter >= 0){
        digit = number / (int)pow(10,counter);
        number = number % (int)pow(10,counter);
        cout << digit << "  " ;
        counter--;
    }

}
