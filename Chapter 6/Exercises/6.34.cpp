#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


int main(){
    srand(time(NULL));
    int number = 1+rand()%1000;
    int guess = 0;

    while ( guess != number){
        cout << "I have a number between 1 and 1000 , can you guess my number ? " << endl;
        cout << "Please type your guess : " << endl;
        cin >> guess ;
        if(guess < number){
            cout << "Too low.Try again." << endl;
        }
        else if(guess > number){
            cout << "Too high.Try again." << endl;
        }
        else{
            cout << "Excellent ! You guessed the number !" << endl;
            break;
        }
    }





    return 0;
}
