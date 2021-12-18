#include <iostream>

using namespace std;


int main(){
    int number = 0;
        cout <<  "Please enter numbers of values you want to sum " << endl;
        cin >> number ;
    int sum = 0;
    int value = 0;
        for(int i = 0 ; i < number ; i++){
            cout << "Please enter a value : " << endl;
            cin >> value ;
            sum += value ;
        }
        cout << "SUM = " << sum << endl;





    return 0;
}
