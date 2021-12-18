#include <iostream>

using namespace std;

bool isEven(int);

int main(){
    for(int i = 0 ; i <= 10 ; i ++){
        if(isEven(i)){
            cout << i << " is an even number." << endl;
        }
        else{
            cout << i << " is not an even number." << endl;
        }
    }






    return 0;
}

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
