#include <iostream>
#include <math.h>

using namespace std;

void hanoiTowersIterative(int,int,int);

int main(){
    int disks = 0;
    do{
        cout << "Enter number of disks : " ;
        cin >> disks;
    }while(disks < 1);

    const int NUMBEROFMOVES = static_cast<int>(pow(2,disks)-1);
    int m = 1;
    int dsk = 0;
    int counter = 0;

        while( m <= NUMBEROFMOVES ){
            if( m % 2 ){
                hanoiTowersIterative(disks,m,1);
            }
            else{
                int mv = m;
                int dsk = 0;
                    while( !(mv % 2) ) {
                        dsk++;
                        mv /= 2;
                    }
                hanoiTowersIterative(disks , m , dsk+1);
            }
            counter++;
            cout << " (" << counter << ".move)" ;
            cout << endl;
            m++;
        }






    return 0;
}

void hanoiTowersIterative(int disks,int turn,int d){
    int b = 0;
    int c = 0;

    if(disks % 2){
        b = 3;
        c = 2;
    }
    else{
        b = 2;
        c = 3;
    }
    int m = static_cast<int>((( turn/pow( 2 , d-1 ) ) -1 ) / 2 );

    if( d % 2 ){
        switch( m % 3 ){
            case 0:
                cout << 1 << " -> " << b ;
                break;
            case 1:
                cout << b << " -> " << c ;
                break;
            case 2:
                cout << c << " -> " << 1 ;
                break;
        }
    }
    else{
        switch( m % 3 ){
            case 0:
                cout << 1 << " -> " << c ;
                break;
            case 1:
                cout << c << " -> " << b ;
                break;
            case 2:
                cout << b << " -> " << 1 ;
                break;
        }
    }






}
