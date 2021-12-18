#include <iostream>

using namespace std;

int main(){
    int side = 0;
    cout << "Please enter side : " << endl;
    cin >> side ;
    cout << endl << endl;
        for(int i = 0 ; i < side ; i++){
            for(int j = 0 ; j < side ; j++){
                cout << "*" ;
            }
            cout << endl;
        }






    return 0;
}
