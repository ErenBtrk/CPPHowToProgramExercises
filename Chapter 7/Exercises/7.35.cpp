#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
    const size_t topicsArraySize = 5;
    array < string , topicsArraySize > topics = {"Political","Environmental","Economical","Health","Security"};

    const size_t responsesRow = 5;
    const size_t responsesColumn = 11;
    array < array< int , responsesColumn > , responsesRow > responses ;




    int userEntry = 0;

    for( size_t i = 0 ; i < topicsArraySize ; i++){
        cout << topics[i] << " issues" << endl;
        cout << "Please rate the issue above this line (1-10) : " ;
        cin >> userEntry;
        responses[i][userEntry] = 'X' ;

    }

    for(size_t i = 0 ; i < responsesRow ; i++){
        cout << topics[i] << " issues" << endl;
        cout << " 1      2       3       4       5       6       7       8       9       10" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        for( size_t j = 1 ; j < responsesColumn ; j++){
                if( responses[i][j] == 'X' ){
                    for( int space = 0 ; space < j - 1 ; space++){
                        cout << "       " ;
                    }
                    cout << static_cast <char> ( responses[i][j] );
                }
                else{
                    cout << ' ' ;
                }
        }
        cout << endl;
    }





    return 0;
}
