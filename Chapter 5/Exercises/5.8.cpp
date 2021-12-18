#include <iostream>

using namespace std;

int main(){
    int limit = 0;
    int value = 0;
    int smallest ;

        cout << "Please enter the number of values you want to enter : " << endl;
        cin >> limit ;

        for( int i = 0 ; i < limit ; i++ ){
            cout << "Please enter a value : " << endl;
            cin >> value ;
            if( i == 0 ){
                smallest = value;
            }
            if( value < smallest ){
                smallest = value ;
            }
        }
            cout << "The smallest number is : " << smallest << endl;






    return 0;
}
