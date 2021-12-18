#include <iostream>
#include <time.h>
#include <random>

using namespace std;


int main(){
    int heads = 0;
    int tails = 0;
    default_random_engine engine(static_cast<int>(time(NULL)));
    uniform_int_distribution <int> randomInt(0,1);
    for(int i=0 ; i < 100 ;i++){
        int number = randomInt(engine);
        if(number){
            heads++;
        }
        else{
            tails++;
        }
    }
    cout << "Number of heads : " << heads << endl;
    cout << "Number of tails : " << tails << endl;



    return 0;
}
