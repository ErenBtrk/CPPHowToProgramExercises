#include <iostream>
#include <array>

using namespace std;

template < size_t SIZE >
int findMinRecursive( array < int , SIZE > &arr , int first , int last , int minElement ){
    if( first == last ){
        return minElement;
    }
    if( arr[first] < minElement ){
        minElement = arr[first] ;
    }
    return findMinRecursive ( arr , first +1 , last , minElement );

}

int main(){
    const size_t arraySize = 5 ;

    array < int , arraySize > array1 = {1,49,11,8,99};

    cout << findMinRecursive( array1 , 0 , arraySize , array1[0] );






    return 0;
}
