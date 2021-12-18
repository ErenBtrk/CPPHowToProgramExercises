#include <iostream>
#include <array>

using namespace std;

int main(){
    const size_t responseSize = 20;
    const size_t frequencySize = 6;
    array < unsigned int , responseSize > responses ={};
    array < unsigned int , frequencySize > frequency ={};

    for(int i = 0 ; i < 20 ; i++){
        cout << i+1 << " . Student please enter your rate (1,2,3,4,5) : " ;
        cin >> responses[i] ;
        frequency[ responses[i] ]++;
    }

    for(int i = 1 ; i < 6 ; i++){
        cout << "Rate " << i << " : " << frequency[i] << " : " ;
        for(int j = 0 ; j < frequency[i] ; j++){
            cout << "*" ;
        }
        cout << endl;
    }






    return 0;
}
