#include <iostream>
#include <math.h>

using namespace std;


int main(){
    double x;
     x = fabs( 7.5 );
     cout << x << endl;
     x = floor( 7.5 );
     cout << x << endl;
     x = fabs( 0.0 );
     cout << x << endl;
     x = ceil( 0.0 );
     cout << x << endl;
     x = fabs( -6.4 );
     cout << x << endl;
     x = ceil( -6.4 );
     cout << x << endl;
     x = ceil( -fabs( -8 + floor( -5.5 ) ) );
     cout << x << endl;


    return 0 ;
}
