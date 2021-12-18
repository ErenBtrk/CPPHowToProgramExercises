#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <time.h>

using namespace std;

default_random_engine engine( static_cast < unsigned int > (time(NULL)) );
uniform_int_distribution < size_t > randomNumber(0,7);


int main(){

    const size_t SIZE = 8;

    array < int , SIZE > horizontal = {2,1,-1,-2,-2,-1,1,2};
    array < int , SIZE > vertical = {-1,-2,-2,-1,1,2,2,1};

    int counter = 0;
    int tour = 0;

    array < int , 65 > frequency = {0};

    while(true){
        array < array < int , SIZE > , SIZE > chessBoard = {0};
            randomNumber(engine);
            size_t currentRow = randomNumber(engine);
            size_t currentColumn = randomNumber(engine);
            int counter = 0;
            chessBoard[ currentRow ][ currentColumn ] = ++counter;
        for( int i = 0 ; i < 1000 ; i++){

            size_t r = randomNumber( engine );
            size_t testRow = currentRow + horizontal[r];
            size_t testColumn = currentColumn + vertical[r];
                if( ( testRow >= 0 && testRow < SIZE ) && ( testColumn >= 0 && testColumn < SIZE) &&
                    ( chessBoard[testRow][testColumn] == 0 ) ){
                        currentRow = testRow;
                        currentColumn = testColumn;
                        chessBoard[currentRow][currentColumn] = ++counter;

                }
        }

        tour++;
        frequency[counter]++;
        cout << tour << " - " << counter << endl;
        if(counter >= 60 && counter < 63){
            cout << "***********\n**********\n***********" << endl;
        }
        if(counter == 64){
            break;
        }
    }

    return 0;
}
