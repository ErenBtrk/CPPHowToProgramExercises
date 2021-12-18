#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
#include <array>

using namespace std;

default_random_engine engine(static_cast < unsigned int > (time(NULL)));
uniform_int_distribution < unsigned int > randomNumber(1,6);

int main(){


    const size_t sumFrequencySize = 13;
    array < int , sumFrequencySize > sumFrequency = {0};

    int dice1 = 0;
    int dice2 = 0;

    for( int i = 0 ; i < 36000000 ; i++){
        dice1 = randomNumber(engine);
        dice2 = randomNumber(engine);
        sumFrequency[dice1+dice2]++;
    }
    cout << setw(12) << "Sum of Dices" << setw(10) << "Frequency" << endl;
    for( int i = 2 ; i < sumFrequency.size() ; i++ ){
        cout << setw(12) << i << setw(10) << sumFrequency[i] << endl;
    }
    cout << "Percentage of 7 rolls is = " << fixed << setprecision(2) << "%"<< (double)  sumFrequency[7] / 36000000 * 100  << endl;





    return 0;
}
