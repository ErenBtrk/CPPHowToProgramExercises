#include <iostream>
#include "integerSet.h"

using namespace std;

int main()
{
    int array1[5] = {5,10,15,20,25};
    IntegerSet i1(array1,5);
    i1.printSet();
    i1.insertElement(30);
    i1.printSet();
    i1.deleteElement(5);
    i1.printSet();

    cout << endl;

    int array2[5] = {10,20,30,40,50};
    IntegerSet i2(array2,5);
    i2.printSet();
    i2.insertElement(60);
    i2.printSet();
    i2.deleteElement(10);
    i2.printSet();

    cout << endl;

    IntegerSet i3;
    i3 = i3.unionOfSets(i1,i2);
    i3.printSet();

    cout << endl;

    IntegerSet i4;
    i4 = i4.intersectionOfSets(i1,i2);
    i4.printSet();


    return 0;
}
