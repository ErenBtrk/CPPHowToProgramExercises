#include <iostream>

using namespace std;

int main(){


        for(int i = 0 ; i < 5 ; i++){
            for(int space = 5-1 ; space > i ; space--){
                cout << " "  ;
            }
            for(int m = 0 ; m <= i*2 ; m++){
                    cout << "*" ;
            }
            cout << endl;
        }
        for(int i = 0 ; i < 5-1 ; i++){
            for(int space = 0  ; space <= i ; space ++){
                cout << " " ;
            }
            for(int m = 0 ; m < ((5 - 1)  * 2) - (i * 2) - 1  ; m++){
                cout << "*" ;
            }
            cout << endl;
        }






    return 0;
}
