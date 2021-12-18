#include <iostream>
#include <array>

using namespace std;

int main(){
    //a
    const size_t arraySize1 = 10 ;
    array < int , arraySize1 > counts = {0};

    //b
    const size_t arraySize2 = 15 ;
    array < int , arraySize2 > bonus = {0};
    for(int &item : bonus){
        item++;
    }
    for(int item : bonus){
        cout << item << " " ;
    }
    cout << endl;

    //c
    const size_t arraySize3 = 12 ;
    array < double , arraySize3 > monthlyTemperatures = {0.0};
    for(double &item : monthlyTemperatures){
        cout << "Enter element's value : "  ;
        cin >> item ;
    }
    for(double item : monthlyTemperatures){
        cout << item << " " ;
    }
    cout << endl;

    //d
    const size_t arraySize4 = 5 ;
    array < int , arraySize4 > bestScores = {10,20,30,41,51};
    for(int item : bestScores){
        cout << item << " " ;
    }

    return 0;
}
