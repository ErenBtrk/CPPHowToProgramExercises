#include <iostream>

using namespace std;

int main(){
    for(int i = 0 ; i < 10 ; i ++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i = 10 ; i > 0 ; i--){
        for(int j = i ; j > 0 ; j --){
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i = 0 ; i < 10 ; i++){
        for(int k = 0 ; k < i ; k++){
            cout << " ";
        }
        for(int j = 10-i ; j >0 ; j-- ){
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i = 0 ; i < 10 ;i++){
        for(int k = 9 ; k > i ; k--){
            cout << " ";
        }
        for(int j =0 ; j<=i ; j++){
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}
