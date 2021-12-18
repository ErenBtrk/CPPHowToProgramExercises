#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

bool isPrime(int);

int main(){
    int counter = 0;
    for(int i = 0 ; i <= 10000 ; i++){
        if(isPrime(i)){
            cout << setw(5) << i << " " ;
            counter++;
            if(counter % 10 == 0){
                cout << endl ;
            }
        }
    }






    return 0;
}

bool isPrime(int number){
    int flag = 0;

    if(number == 0 || number== 1){
        return false;
    }

    for(int i = 2 ; i <= sqrt(number) ; i++){
        if( number % i == 0){
            flag = 1;
        }
    }
    if(flag == 0){
        return true;
    }
    else{
        return false;
    }

}
