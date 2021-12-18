#include <iostream>

using namespace std;

bool multiple(int , int);

int main(){
    int a = 0 , b = 0 ;
    cout << "Please enter two numbers : " ;
    cin >> a >> b ;
    if(multiple(a,b)){
        cout << b << " is multiple of " << a << endl;
    }
    else{
        cout << b << " is not multiple of " << a << endl;
    }





    return 0;
}

bool multiple(int num1,int num2){
    if ( num2 % num1 == 0){
        return true;
    }
    else{
        return false;
    }
}
