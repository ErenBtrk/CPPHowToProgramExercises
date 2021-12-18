#include <iostream>
#include <math.h>

using namespace std;

int toDecimal(int);

int main(){
    int binaryNum;
        cout << "Please enter a binary number : " << endl;
        cin >> binaryNum;
        cout << "The number's decimal equilavent : " << toDecimal(binaryNum) << endl;





    return 0;
}

int toDecimal(int number){
    int remainder = 0;
    int decimal = 0;
    int counter = 0;
    while( number > 0 ){
        remainder = number % 10;
        decimal += remainder * pow(2,counter);
        number /= 10;
        counter++;
    }
    return decimal;

}
