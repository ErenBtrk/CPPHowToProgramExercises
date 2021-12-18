#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int binary(int);

int main(){

    cout << setw(10) << "Decimal" << setw(13) << "Binary" << setw(10) <<
                "Octal" << setw(15) << "Hexadecimal" << endl;
    for(int i = 0 ; i <= 256 ; i++){
        cout << setw(10) << dec <<  i << setw(13) << binary(i) << setw(10) <<
                oct << i << setw(15) << hex << i << endl;
    }








    return 0;
}

int binary(int number){
    int bin = 0;
    int digit = 0;
    int exponent = 0;
        while( number > 0){
            digit = number % 2 ;
            bin += digit * pow(10,exponent);
            exponent++;
            number /= 2 ;
        }
    return bin ;
}
