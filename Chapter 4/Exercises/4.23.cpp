#include <iostream>

using namespace std;

int main(){
    //a1
    {
        int x = 9;
        int y = 11;
        if( x < 10 ){
            if(y >10){
                cout << "*****" << endl;
            }
            else{
                cout << "#####" << endl;
            }
        }
            cout << "$$$$$" << endl;
    }
    cout << endl;
    //a2
    {
        int x =11;
        int y = 9;
        if( x < 10 ){
            if(y >10){
                cout << "*****" << endl;
            }
            else{
                cout << "#####" << endl;
            }
        }
            cout << "$$$$$" << endl;
    }
    cout << endl;
    //b1
    {
        int x = 9;
        int y = 11;
        if(x < 10){
            if(y > 10){
                cout << "*****" << endl;
            }
        }
        else{
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }


    }
    cout << endl;
    //b2
    {
         int x = 11;
        int y = 9;
        if(x < 10){
            if(y > 10){
                cout << "*****" << endl;
            }
        }
        else{
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    }



    return 0;
}
