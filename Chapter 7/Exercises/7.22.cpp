#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
    const size_t SIZE = 8;
    array < array < int , SIZE > , SIZE > chessBoard = {0};
    array < array < int , SIZE > , SIZE > accessibility ={2 ,3 ,4 ,4 ,4 ,4, 3, 2,
                                                                                    3 ,4 ,6, 6 ,6, 6, 4, 3,
                                                                                    4, 6, 8 ,8, 8, 8 ,6, 4,
                                                                                    4, 6 ,8 ,8 ,8 ,8 ,6, 4,
                                                                                    4 ,6 ,8 ,8, 8, 8 ,6, 4,
                                                                                    4, 6 ,8 ,8, 8 ,8 ,6, 4,
                                                                                    3 ,4 ,6 ,6 ,6, 6, 4, 3,
                                                                                    2 ,3 ,4 ,4 ,4 ,4 ,3, 2};

    array < int , SIZE > horizontal = {2,1,-1,-2,-2,-1,1,2};
    array < int , SIZE > vertical = {-1,-2,-2,-1,1,2,2,1};

    size_t currentRow = 0;
    size_t currentColumn = 0;
    int counter = 0;


    while(counter<64){
        chessBoard[currentRow][currentColumn] = ++counter;
        accessibility[currentRow][currentColumn] = 0;

        size_t nextRow;
        size_t nextColumn;

        int min=9;

            for( size_t i = 0 ; i < SIZE ; i++){

                size_t testRow = currentRow + vertical[i];
                size_t testColumn = currentColumn + horizontal[i];

                        if( ( testRow >= 0 && testRow < SIZE ) && ( testColumn >= 0 && testColumn < SIZE) &&
                             ( chessBoard[testRow][testColumn] == 0 ) ){
                                    --accessibility[testRow][testColumn];
                                if(accessibility[testRow][testColumn] < min){
                                    min = accessibility[testRow][testColumn];
                                    nextRow = testRow;
                                    nextColumn = testColumn;
                                }
                        }
            }
                        if(min == 9){
                            break;
                        }
                        currentRow = nextRow;
                        currentColumn = nextColumn;

    }

    cout << "Visited Squares = " << counter << endl;

      for ( size_t row = 0 ; row < SIZE ; row++ ){
        for( size_t column = 0 ; column < SIZE ; column++ ){
            cout << setw(3) << chessBoard[row][column] ;
        }
        cout << endl;
    }
    cout << "\n\n\n" ;
    for ( size_t row = 0 ; row < SIZE ; row++ ){
        for( size_t column = 0 ; column < SIZE ; column++ ){
            cout << setw(3) << accessibility[row][column] ;
        }
        cout << endl;
    }




    return 0;
}
