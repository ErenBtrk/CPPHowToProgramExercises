#include <iostream>

using namespace std;

int main(){
    //a
    int x = 6 ;
    int y = 4 ;
        if( !(x < 5) && !(y >= 7)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        if( !(x<5 || y>= 7) ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    //b
    int a = 10;
    int b = 10;
    int g = 6;
        if( !(a == b) || !(g != 5) ){
            cout << "Yes1" << endl;
        }
        else{
            cout << "No1" << endl;
        }
        if( !(a == b && g != 5) ){
            cout << "Yes1" << endl;
        }
        else{
            cout << "No1" << endl;
        }
    //c
    x = 10 ;
    y = 3 ;
        if( !( (x <= 8 ) && (y > 4) ) ){
            cout << "Yes2" << endl;
        }
        else{
            cout << "No2" << endl;
        }
        if( !(x<= 8) || !(y > 4) ){
            cout << "Yes2" << endl;
        }
        else{
            cout << "No2" << endl;
        }
     //d
     int i = 3;
     int j = 7;
        if( !( (i > 4) || (j <= 6) ) ){
            cout << "Yes3" << endl;
        }
        else{
            cout << "No3" << endl;
        }
        if( !(i > 4) && !(j <= 6) ){
            cout << "Yes3" << endl;
        }
        else{
            cout << "No3" << endl;
        }




    return 0;
}
