#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>


using namespace std;


int main(){
    srand (time ( NULL) );
        cout << 2 +( rand() % 5 ) * 2 << endl; //a 2,4,6,8,10
        cout << 3 +( rand() % 5 ) * 2 << endl; //b 3,5,7,9,11
        cout << 6 +( rand() % 5 ) * 4 << endl; //c 6,10,14,18,22





    return 0 ;
}
