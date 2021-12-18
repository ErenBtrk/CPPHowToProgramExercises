#include <iostream>
#include <iomanip>

using namespace std;

bool isPerfect(int);

int main(){
    cout << setw(20) << "Perfect number" << setw(12) << "Divisors" << endl;
    for( long i = 0 ; i <= 100000000000 ; i++){
        if( isPerfect(i) ){
            cout << setw(20) <<  i  ;
            for( long divisor = 1 ; divisor < i ; divisor++){
                if( divisor == 1){
                    cout << setw(5) << divisor << " " ;
                }
                if( i % divisor == 0 && divisor != 1){
                    cout << divisor << " " ;
                }
            }
            cout << endl << endl;
        }
    }




    return 0;
}

bool isPerfect(int num){
    long total = 1;
    for(long counter = 2 ; counter <= num/2 ; counter++){
        if(num % counter == 0){
            total += counter ;
        }
    }
    if( total == num ){
        return true;
    }
    else{
        return false;
    }
}
