#include <iostream>
#include <math.h>

using namespace std;

int main(){
    unsigned int users = 1000000000;
    double rate = 0.02;
    int month = 0;
    while ( rate <= 0.05 ){
            cout << "Rate = %" << rate*100 << endl;
        for(month = 1 ; users * pow(1.0+rate,month) <= 2500000000 ; month++){

        }
        cout << "If growth rate of a month was %" << rate * 100
                    << " facebook could reach 2.5 Billion users in " << month << " months" << endl;
        rate += 0.01;
    }




    return 0;
}
