#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector < int > vector1(0);
    int number = 0 ;
    for( size_t i = 0 ; i < 20 ; i++){
        cout << "Enter a number : " ;
        cin >> number ;
        while ( number < 10 || number > 100){
            cout << "Enter a number between 10 - 100 : " ;
            cin >> number ;
        }
        int flag = 0;
        for(size_t j = 0 ; j < vector1.size() ; j ++){
            if( j == i ){
                continue;
            }
            if( vector1[j] == number ){
                flag = 1;
                break;
            }
        }
        if( flag == 0){
            vector1.push_back(number);
        }
    }
    for( const int &item : vector1 ){
        cout << item << " " ;
    }





    return 0;
}
