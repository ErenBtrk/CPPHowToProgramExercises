#include <iostream>

using namespace std;

inline int tripleByValue(int);
inline void tripleByReference(int &);

int main(){
    int number = 10 ;
    int &refNum = number;
    tripleByReference(refNum);
    cout << "Triple the number's value by reference = " << number << endl;
    cout << "Triple the number's value by value = " << tripleByValue(number) << endl;





    return 0;
}

int tripleByValue(int number){
    return number*3;
}

void tripleByReference(int &number){
     number *= 3;
}
