#include <iostream>

using namespace std;

void fibonacci(int);

int main(){
    int number = 0 ;
    cout << "How many numbers do you want to display of fibonacci sequence ? : "  ;
    cin >> number ;
    fibonacci(number);






    return 0;
}

void fibonacci(int number){
    int a = 0;
    int b = 1;
    int c = 0;
        for(int i = 0 ; i < number ; i++){
            cout << b << endl ;
            c = a+b;
            a = b;
            b = c;
        }
}
