#include <iostream>

using namespace std;

void hanoiTowers(int ,int ,int ,int );

int main(){
    int numberOfDisks = 0;


    do{
        cout << "Enter number of disks : " << endl;
        cin >> numberOfDisks ;
    }while(numberOfDisks < 1);

    hanoiTowers(numberOfDisks,1,3,2);






    return 0;
}

void hanoiTowers(int disks,int firstPeg,int stackPeg,int tempPeg){
    static int counter = 0;
    if(disks){
        hanoiTowers(disks - 1,firstPeg,tempPeg,stackPeg);
        cout << firstPeg << " -> " << stackPeg << " " ;
        counter++;
        cout << " ( " << counter << ".move )" << endl;
        hanoiTowers(disks - 1,tempPeg,stackPeg,firstPeg);
    }
}
