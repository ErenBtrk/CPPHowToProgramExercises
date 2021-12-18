#include <iostream>

using namespace std;

int main(){
    int number;
        for(int i = 0 ; i < 5 ; i++){
            cout << "Please enter a number : " << endl;
            cin >> number;
            cout << "Number " << number << " : " ;
            for(int j = 0 ; j < number ; j++){
                  cout << "*" ;
            }
            cout << endl;
        }





    return 0;
}
