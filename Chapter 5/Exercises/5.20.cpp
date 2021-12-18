#include <iostream>
#include <math.h>

using namespace std;

int main(){
    for(int i = 1 ; i <= 500 ; i++){
        for(int j = i + 1 ; j <= 500 ; j++){
            for(int k = j + 1 ; k <= 500 ; k ++){
                if( pow(i,2)+pow(j,2) == pow(k,2) ){
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }






    return 0;
}
