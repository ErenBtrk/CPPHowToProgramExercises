// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<char> list1;
    list1.insertAtBack('a');
    list1.insertAtBack('l');
    list1.insertAtBack('i');


    LinkedList<char> list2;
    list2.insertAtBack('v');
    list2.insertAtBack('e');
    list2.insertAtBack('l');
    list2.insertAtBack('i');

    LinkedList<char> list3;

    concatenate(list1, list2, list3);
    list3.print();
    list1.print();
    list2.print();

    
    

    
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
