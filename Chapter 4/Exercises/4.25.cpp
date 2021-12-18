#include <iostream>

using namespace std;

int main(){
    int size;
        cout << "Please enter the size of the side of square : " << endl;
        cin >> size;
    int row=0;
    int column=0;
        while(row < size){
            column = 0;
            while(column < size){
                if(column == 0 || column == size-1 || row == 0 || row == size-1){
                    cout << "*" ;
                }
                else{
                    cout << " " ;
                }
                column++;
            }
            row++;
            cout << endl;
        }




    return 0;
}
