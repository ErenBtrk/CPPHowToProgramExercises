#include <iostream>

using namespace std;

int main(){
    //a
    int *number = nullptr;
    int a = 10 ;
    number = &a ;
    cout << number << endl;
    //b
    double *realPtr;
    long *integerPtr;
    integerPtr = reinterpret_cast <long*> (realPtr);
    cout << realPtr << endl;
    cout << integerPtr << endl;
    //c
    int *x;
    int *y;
    x=y ;
    //d
    char s[] = "this is a character array";
    for ( size_t offset = 0 ; *(s+offset) != '\0'; offset++)
    cout << *(s+offset ) << ' ';
    cout << endl;
    //e
    char b[] = "this is a character array";
    char *bPtr =nullptr;
    bPtr = b;
    for ( ; *bPtr != '\0'; ++bPtr)
    cout << *bPtr << ' ';
    cout << endl;
    //f
    short *numPtr, result = 2;
    numPtr = &result;
    void *genericPtr = numPtr;
    cout << result << endl;
    result = *(short*) (genericPtr)    + 7;
    cout << result << endl;
    //g
    double d = 19.34;
    double *dPtr = &d;
    cout << dPtr << endl;





    return 0;
}
