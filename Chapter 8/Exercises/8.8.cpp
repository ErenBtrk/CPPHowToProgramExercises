#include <iostream>
#include <array>

using namespace std;



int main(){
    const size_t SIZE = 5;
    unsigned int values[SIZE] = {2,4,6,8,10};
    unsigned int* vPtr = nullptr;
    cout << "Array subscript notation : " << endl;
    for( size_t i = 0 ; i < SIZE ; i++ ){
        cout << values[i] << " " ;
    }
    cout << endl;

    vPtr = &values[0];
    vPtr = values ;

    cout <<  "Pointer/offset notation : " << endl;
    for( size_t offset = 0 ; offset < SIZE ; offset++ ){
        cout << *(vPtr+offset) << " " ;
    }
    cout << endl;

    cout <<  "Pointer/offset notation with the built-in array's name : " << endl;
    for( size_t offset = 0 ; offset < SIZE ; offset++ ){
        cout << *(values+offset) << " " ;
    }
    cout << endl;

    cout <<  "Subscripting the pointer to the built-in array : " << endl;
    for( size_t offset = 0 ; offset < SIZE ; offset++ ){
        cout << vPtr[offset] << " " ;
    }
    cout << endl;

    cout << values[4] << endl;
    cout << *(values+4) << endl;
    cout << vPtr[4] << endl;
    cout << *(vPtr+4) << endl;

    cout << vPtr+3 << endl;
    cout << *(vPtr+3) << endl;

    vPtr = &values[4] ;
    cout << vPtr << endl;
    vPtr -= 4 ;
    cout << vPtr << endl;



    return 0;
}

