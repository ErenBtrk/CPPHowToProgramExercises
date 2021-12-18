#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int roundToInteger(double);
int roundToTenths(double);
int roundToHundredths(double);
int roundToThousandths(double);

int main(){
    cout << roundToInteger(55.9) << endl;
    cout << roundToTenths(55.99) << endl;
    cout << roundToHundredths(55.999) << endl;
    cout << roundToThousandths(55.9999) << endl;





    return 0 ;
}

int roundToInteger(double number){
    return floor(number + 0.5);
}

int roundToTenths(double number){
    return floor(number * 10 + 0.5) / 10;
}

int roundToHundredths(double number){
    return floor(number * 100 + 0.5) / 100 ;
}

int roundToThousandths(double number){
    return floor(number * 1000 +0.5) / 1000;
}
