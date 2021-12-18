#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double amount;
    double principal = 1000.0;
    cout << setw(15) << "Year" << setw(35) << "Amount on deposit" << endl;
    cout << fixed << setprecision( 2 );

    for ( unsigned int year = 1 ; year <= 10; ++year ){
        cout << setw(10) << year << " .YEAR : " << endl;
        for( int rate = 5 ; rate <= 10 ; rate++){
            cout << setw(20) << "COMPOUND RATE : %" << rate ;
            amount = principal * pow( 1.0 + (double)rate / 100, year );
            cout << setw( 21 ) << amount << endl;
        }

    }


    return 0;
}
