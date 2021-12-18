#include <iostream>

using namespace std;

int factorial(int);

int main(){
    for( int i = 1 ; i <= 5 ; i++ ){
        cout << i << "! = " << factorial(i) << endl;
    }






    return 0;
}

int factorial(int number){
    int result = 1;
    for(int i = number ; i > 0 ; i--){
        result *= i ;
    }
    return result;
}
