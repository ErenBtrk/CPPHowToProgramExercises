#include <iostream>
#include <array>

using namespace std;

int main(){
    const size_t arraySize = 20;
    array < int , arraySize > array1 = {0};
    for(size_t i = 0 ; i < 20 ; i++){
        cout << "Enter array1[" << i << "] ( Between 10 - 100 ) = " ;
        cin >> array1[i] ;
        while( array1[i] < 10 || array1[i] > 100){
            cout << "Please enter a value between 10 - 100 : " ;
            cin >> array1[i] ;
        }
        for( size_t j = 0 ; j < 20 ; j++){
            if( j == i){
                continue;
            }
            if(array1[i] == array1[j]){
                array1[i] = 0;
                break;
            }
        }
    }
    for(size_t i = 0 ; i < 20 ; i++){
        if( array1[i] != 0){
            cout << array1[i] << " " ;
        }
    }








    return 0;
}
