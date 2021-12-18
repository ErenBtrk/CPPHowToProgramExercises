#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /* a)

            float cube( float ); // function prototype
            float cube( float number ) // function definition
            {
                return number * number * number;
            }

        b)
            srand(time(NULL));
            int randomNumber = rand()%9999;

        c)

            float y = 123.45678;
            int x;
            x = y ;
            cout << fixed << static_cast< float > (x) << endl;

        d)

            double square( double number )
            {
                number = 0;
                return number * number;
            }

        e)

            int sum( int n )
            {
                if ( 0 == n )
                    return 0;
                else
                    return n + sum( n-1 );
            }

    return 0;
}
