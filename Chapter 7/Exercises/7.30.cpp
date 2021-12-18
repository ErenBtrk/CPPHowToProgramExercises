#include <iostream>
#include <array>

using namespace std;

template < size_t SIZE >
void printArray( array < int , SIZE > &arr , int first , int last ){
    if ( first == last ){
        return;
    }
    cout << arr[first] << " " ;
    printArray( arr , first +1 , last );
}


int main(){
    const size_t arraySize = 10 ;

    array < int , arraySize > array1 = {2,4,5,1,10,6,9,8,3,7};

    printArray( array1 , 0 , arraySize );






    return 0;
}
