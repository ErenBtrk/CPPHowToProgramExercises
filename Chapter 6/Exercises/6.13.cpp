#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double number = 0;
        for( int i = 0 ; i < 5 ; i++ ){
            cout << "Enter a number : " << endl;
            cin >> number ;
            cout << "Number rounded to integer : " << floor(number +0.5) << endl;
        }




    return 0;
}
