#include <iostream>

using namespace std;

template <typename T>
T minimum(T number1,T number2){
    if(number1 < number2){
        return number1;
    }
    else{
        return number2;
    }
}

int main(){
    cout << minimum(4,2) << endl;
    cout << minimum(2.2,2.1) << endl;
    cout << minimum('z','a') << endl;





    return 0;
}
