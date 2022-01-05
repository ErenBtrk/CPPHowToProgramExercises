// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int> list1;
    list1.insertSorted(5);
    list1.insertSorted(2);
    list1.insertSorted(1);
    list1.insertSorted(10);

    LinkedList<int> list2;
    list2.insertSorted(3);
    list2.insertSorted(7);
    list2.insertSorted(1);
    list2.insertSorted(8);

    LinkedList<int> list3;

    mergeLists(list1, list2, list3);
    list3.print();

    LinkedList<int> list4;
    list4.insertAtFront(21);
    list4.insertAtFront(31);
    list4.insertSorted(11);

    LinkedList<int> list5;
    mergeLists(list3, list4, list5);
    list5.print();
    list1.print();

    std::cout << list5.sumElements() << std::endl;
    std::cout << list1.average() << std::endl;

    LinkedList<char> cList1;
    int c = 65;
    for (int i = 0; i < 10; i++)
    {
        cList1.insertAtBack(static_cast<char>(c++));
    }
    LinkedList<char> cList2;
    copyReverseOrder(cList1, cList2);
    cList1.print();
    cList2.print();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
