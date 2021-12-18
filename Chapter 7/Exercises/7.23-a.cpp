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
    array < array < int , SIZE > , SIZE > chessBoard = {0};
    array < int , SIZE > horizontal = {2,1,-1,-2,-2,-1,1,2};
    array < int , SIZE > vertical = {-1,-2,-2,-1,1,2,2,1};


    size_t currentRow = 0;
    size_t currentColumn = 0;
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

    cout << "Visited Squares = " << counter << endl;

      for ( size_t row = 0 ; row < SIZE ; row++ ){
        for( size_t column = 0 ; column < SIZE ; column++ ){
            cout << setw(3) << chessBoard[row][column] ;
        }
        cout << endl;
    }




    return 0;
}
