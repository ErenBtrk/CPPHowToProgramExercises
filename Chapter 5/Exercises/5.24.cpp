#include <iostream>

using namespace std;

int main(){
        int size = 0 ;
        cout << "Please enter the size : " ;
        cin >> size;

        for(int i = 0 ; i < size ; i++){
            for(int space = size-1 ; space > i ; space--){
                cout << " "  ;
            }
            for(int m = 0 ; m <= i*2 ; m++){
                    cout << "*" ;
            }
            cout << endl;
        }
        for(int i = 0 ; i < size-1 ; i++){
            for(int space = 0  ; space <= i ; space ++){
                cout << " " ;
            }
            for(int m = 0 ; m < ((size - 1)  * 2) - (i * 2) - 1  ; m++){
                cout << "*" ;
            }
            cout << endl;
        }






    return 0;
}
