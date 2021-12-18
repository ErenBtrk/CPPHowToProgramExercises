#include <iostream>

using namespace std;

int main(){
    int product = 1;

    for(int i = 1 ; i <= 15 ; i+=2 ){
        cout << i << " " << endl;
        product *= i ;
    }
    cout << "Product of the odd numbers between 1-15 : " << product << endl;




    return 0;
}
