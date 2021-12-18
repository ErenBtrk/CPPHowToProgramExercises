#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double pi = 0.0f;
    double divisor = 1.0f;
        cout << setw(10) << "Term" << setw(15) << "Pi" << endl;
    for (int counter = 1 ; counter <= 1000  ; counter++){
        if( counter % 2 == 0 ){
            pi = pi - (4.0f / divisor) ;
        }
        else{
            pi = pi + (4.0f / divisor) ;
        }
        cout << setw(10) << counter << setw(15) << setprecision(10) << pi << endl;
        divisor += 2.0f;
    }






    return 0;
}
