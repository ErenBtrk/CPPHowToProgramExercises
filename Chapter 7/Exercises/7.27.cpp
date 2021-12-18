#include <iostream>
#include <array>
#define LIMIT 1000

using namespace std;

int main(){
    array < int , LIMIT > array1 = {0};
    for( size_t i = 0 ; i < LIMIT ; i++ ){
        array1[i] = 1 ;
    }
    int hold = 0;

    for( size_t i = 2 ; i < LIMIT ; i++){
        if( array1[i] == 1 ){
            for( size_t j = i+1 ; j < LIMIT ; j++){
                if( j % i == 0 ){
                    array1[j] = 0;
                }
            }
        }
    }
    for(size_t i = 2 ; i < LIMIT ; i++){
        if(array1[i] == 1){
            cout << i << endl;
        }
    }




    return 0;
}
