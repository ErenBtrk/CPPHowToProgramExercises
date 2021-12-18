#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
    const size_t rows = 4;
    const size_t columns = 5;

    array < array < int , columns > , rows > sales = {0};

    size_t salesPersonNo;
    size_t productNo;
    double totalDollar;

    while(true){
        cout << "Enter sales person no (-1 to quit) : " << endl;
        cin >> salesPersonNo;
        if(salesPersonNo == EOF){
            break;
        }
        cout << "Enter product no : " << endl;
        cin >> productNo;
        while(salesPersonNo > rows || productNo > columns){
            cout << "Incorrect entry. Try again" << endl;
            cout << "Enter sales person no (1-4): " << endl;
            cin >> salesPersonNo;
            cout << "Enter product no (1-5): " << endl;
            cin >> productNo;
        }
        cout << "Enter total dollar value : "<< endl;
        cin >> totalDollar;

        sales[salesPersonNo-1][productNo-1] += totalDollar;
    }
    cout << "Product" ;
    for( size_t i = 0 ; i < columns ; i ++){
        cout << setw(7) << i+1 ;
    }
    cout << "\n---------------------------------------------" << endl;
    for( size_t i = 0 ; i < rows ; i++){
            cout << "Person" << i+1 ;
        for( size_t j = 0 ; j < columns ; j++){
            cout << setw(7) << sales[i][j] ;
        }
        cout << endl;
    }



    return 0;
}
