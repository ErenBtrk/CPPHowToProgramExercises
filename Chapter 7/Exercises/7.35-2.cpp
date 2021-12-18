#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
    const size_t topicsArraySize = 5;
    array < string , topicsArraySize > topics = {"Political","Environmental","Economical","Health","Security"};

    const size_t responsesRow = 5;
    const size_t responsesColumn = 11;
    array < array< int , responsesColumn > , responsesRow > responses ={0};

    char choice ;
    int userEntry = 0;
    int counter = 0;

    while( toupper(choice) != 'N' ){
        for( size_t i = 0 ; i < topicsArraySize ; i++){
            cout << topics[i] << " issues" << endl;
            cout << "Please rate the issue above this line (1-10) : " ;
            cin >> userEntry;
            while( userEntry > 10 || userEntry <= 0 ){
                cout << "Please rate the issue above this line (1-10) : " ;
                cin >> userEntry;
            }
            responses[i][userEntry]++ ;
            cout << endl;
        }
        counter++;

        cout << "Enter 'y' to keep rating and 'n' to quit : " ;
        cin >> choice ;
        while(toupper(choice) != 'Y' && toupper(choice) != 'N' ){
            cout << "Wrong entry.Enter 'y' or 'n' : " << endl;
            cin >> choice ;
          }
        cout << endl;
    }



    int highestTotal = 0;
    int lowestTotal = 10 * counter ;
    size_t highestTotalRow = 0;
    size_t lowestTotalRow = 0;

    cout << setw(15) << "Issues" ;
    for(int i = 0 ; i < 10 ; i++){
        cout << setw(6) << i+1 ;
    }
    cout << setw(10) << "Average" ;
    cout << "\n------------------------------------------------------------------------------------------" << endl;
    for(size_t i = 0 ; i < responsesRow ; i++){
        int total = 0;
        double average = 0.0;
        cout << setw(15) << topics[i]  ;
        for( size_t j = 1 ; j < responsesColumn ; j++){
            cout << setw(6) << responses[i][j] ;
                total += j * responses[i][j];
        }
        if( total > highestTotal ){
            highestTotal = total;
            highestTotalRow = i;
        }
        if( total < lowestTotal ){
            lowestTotal = total;
            lowestTotalRow = i;
        }

        average = static_cast <double> (total) / counter ;
        cout << setw(10) << setprecision(2) << fixed << average ;
        cout << endl;
    }
    cout << "Highest Total = " << topics[highestTotalRow] << "(" << highestTotal << ")" << endl;
    cout << "Lowest Total = " << topics[lowestTotalRow] << "(" << lowestTotal << ")" << endl;




    return 0;
}
