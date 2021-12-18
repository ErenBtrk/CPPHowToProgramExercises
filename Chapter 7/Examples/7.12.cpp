#include <iostream>
#include <array>

using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize = 3;

int main(){
    cout << "First call to each function : " << endl;
    staticArrayInit();
    automaticArrayInit();
    cout << "\nSecond call to each function : " << endl;
    staticArrayInit();
    automaticArrayInit();






    return 0;
}

void staticArrayInit(){
    static array < int , arraySize > array1 ;

    cout << endl << "Values on entering staticArrayInit() : " ;

    for( size_t i = 0 ; i < array1.size() ; i++){
        cout << "array1[" << i << "] = " << array1[i] << " "  ;
    }

    cout << endl << "Values on exiting staticArrayInit() : " ;

    for(size_t j = 0 ; j < array1.size() ; j++){
        cout << "array1[" << j << "] = " << ( array1[j] += 5 ) << " " ;
    }
    cout << endl;

}

void automaticArrayInit(){
    array < int , arraySize > array2 = {1,2,3} ;

    cout << endl << "Values on entering automaticArrayInit() : " ;

    for( size_t i = 0 ; i < array2.size() ; i++){
        cout << "array2[" << i << "] = " << array2[i] << " "  ;
    }

    cout << endl << "Values on exiting automaticArrayInit() : " ;

    for( size_t j = 0 ; j < array2.size() ; j++){
        cout << "array2[" << j << "] = " << ( array2[j] += 5 ) << " " ;
    }
    cout << endl;
}
