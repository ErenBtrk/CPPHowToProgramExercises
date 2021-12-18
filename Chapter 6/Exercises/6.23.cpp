#include <iostream>

using namespace std;

int main(){
    string s;
    int side = 0;
    cout << "Please enter side : " ;
    cin >> side ;
    cout << "Please enter a string : " ;
    cin >> s ;
        for(int i = 0 ; i < side ; i++){
            for(int j = 0 ; j < side ; j++){
                cout << s << " " ;
            }
            cout << endl;
        }






    return 0;
}
