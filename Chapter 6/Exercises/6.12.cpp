#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharges(int);

int main(){
    int hours = 0 ;
    int carNo =  0;

        while ( hours != EOF ){
            cout << "Please enter hours parked (-1 to quit) : " << endl;
            cin >> hours ;
            if(hours == EOF){
                break;
            }
            carNo ++ ;
            cout << setw(10) << "Car No" << setw(10) << "Hours" << setw(11) << "Charge" << endl;
            cout << setw(10) << carNo << setw(10) << hours << setw(10) << calculateCharges(hours) << "$" << endl;
        }



    return 0 ;
}

double calculateCharges(int hours){
    if(hours <= 0){
        return 0.00;
    }
    else if(hours > 0 && hours <= 3){
        return 2.00;
    }
    else{
        return 2.00 + (hours - 3) * 0.50 ;
    }

}
