#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <stdexcept>


using namespace std;



template < size_t  SIZE >
void outputArray( const array < int,SIZE > & arr){
    for( int element : arr ){
        cout << element << " " ;
    }
    cout << endl;
}

template < size_t SIZE >
void inputArray( array < int , SIZE > &arr){
    for( int &element : arr){
        cin >> element ;
    }
}

int main(){
    const size_t array1Size=7;
    const size_t array2Size=10;
    array < int , array1Size > array1 = {0};
    array < int , array2Size > array2 = {0};

    cout << "Size of array1 is = " << array1.size() ;
    cout << "\narray1 after initialization:" << endl;
    outputArray(array1);

    cout << "Size of array2 is = " << array2.size() ;
    cout << "\narray2 after initialization:" << endl;
    outputArray(array2);

    cout << "Enter 17 integers : " << endl;
    inputArray(array1);
    inputArray(array2);

    cout << "After input the arrays contain : \n" << "array1 : " << endl;
    outputArray(array1);
    cout << "array2 : " << endl;
    outputArray(array2);

    cout << "Evaluating : array1 != array2" << endl;
    int flag = 0;
    for(size_t i = 0 ; i < array1.size() ; i++){
        if(array1[i] != array2[i]){
            flag = 1;
            break;
        }
    }
    if( flag == 1){
        cout << "array1 and array2 are not equal" << endl;
    }

    array < int , array1Size > array3 = {0};
    cout << "\nSize of array3 is = " << array3.size();
    cout << "\narray3 after initialization : " << endl;
    outputArray(array3);

    cout << "\nAssigning array2 to array1" << endl;
    for(size_t i = 0 ; i < array1.size() ; i++){
        array1[i] = array2[i];
    }

    cout << "array1 : " << endl;
    outputArray(array1);
    cout << "array2 : " << endl;
    outputArray(array2);

    cout << "\nEvaluating array1 == array2 " << endl;
    for(size_t i = 0 ; i < array2.size() ; i++){
        if(array1[i] != array2[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "array1 and array2 are equal" << endl;
    }
    else{
        cout << "array1 and array2 are not equal" << endl;
    }

    cout << "\narray1[5] is " << array1[5] << endl;
    cout << "\n\nAssigning 1000 to array1[5]" << endl;
    array1[5] = 1000;
    cout << "array1[5]:" << endl;
    outputArray(array1);


    try{
        cout << "\nAttempt to display array1.at(15)" << endl;
        cout << array1.at(15) << endl;
    }
    catch(out_of_range &ex){
        cerr << "An exception occurred : " << ex.what() << endl;
    }



    return 0;
}


