#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>



using namespace std;


int main(){
    default_random_engine engine (static_cast< unsigned int >( time( NULL ) ) );

    uniform_int_distribution <int> randomInt(1,2);
    cout << "1<= x <= 2 range :" << endl;
    cout << "x = " << randomInt(engine) << endl << endl;

    uniform_int_distribution <int> randomInt2(1,100);
    cout << "1 <= x <= 100 range :" << endl;
    cout << "x = " << randomInt2(engine) << endl << endl;

    uniform_int_distribution <int> randomInt3(0,9);
    cout << "0 <= x <= 9 range :" << endl;
    cout << "x = " << randomInt3(engine) << endl << endl;

    uniform_int_distribution <int> randomInt4(1000,1112);
    cout << "1000 <= x <= 1112 range :" << endl;
    cout << "x = " << randomInt4(engine) << endl << endl;

    uniform_int_distribution <int> randomInt5(-1,1);
    cout << "-1 <= x <= 1 range :" << endl;
    cout << "x = " << randomInt5(engine) << endl << endl;

    uniform_int_distribution <int> randomInt6(-3,11);
    cout << "-3 <= x <= 11 range :" << endl;
    cout << "x = " << randomInt6(engine) << endl << endl;






    return 0;
}
