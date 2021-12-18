#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number = 0;
    double sum = 0;
    double average = 0.0 ;
    int value = 0;



        for( int i=0 ; value != EOF ; i++){
            cout << "Please enter a value (-1 to calculate inputted value's average) : " << endl;
            cin >> value ;
            if( value == EOF ){
                average = sum / i ;
                break;
            }
            sum += value;
        }
        cout << "Average of the values you have entered : " << average << endl;






    return 0;
}
