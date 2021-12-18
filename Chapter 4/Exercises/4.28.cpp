#include <iostream>

using namespace std;

int main(){
    int row = 0;
    int column = 0;
    int size = 0;
        cout << "Please enter the size : " << endl;
        cin >> size;

        while(row < size){
                column = 0;
            while(column < size){
                if( row % 2 == 0){
                    cout << "* " ;
                }
                else{
                    cout << " *" ;
                }
                column++;
            }
            cout << endl;
            row++;
        }






    return 0;
}
