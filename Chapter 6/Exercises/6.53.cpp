#include <iostream>

using namespace std;

template <typename T>
T maximum(T number1,T number2){
    if( number1 > number2 ){
        return number1;
    }
    else{
        return number2;
    }
}

int main(){
    cout << maximum(21,11) << endl;
    cout << maximum(99.98,99.99) << endl;
    cout << maximum('n','m') << endl;






    return 0;
}
