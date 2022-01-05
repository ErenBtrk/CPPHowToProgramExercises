// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int> list1;
    list1.print();
    list1.insertAtBack(2);
    list1.print();
    list1.insertAtBack(1);
    list1.print();
    list1.insertAtBack(3);
    list1.print();
    list1.insertAtBack(5);
    list1.print();
    list1.insertAtBack(4);
    list1.print();
    list1.insertAtFront(1);
    list1.print();
    list1.insertAtFront(10);
    list1.print();
    int deleted;
    list1.removeFromBack(deleted);
    std::cout << "Deleted " << deleted << std::endl;
    list1.print();
    list1.removeFromFront(deleted);
    std::cout << "Deleted " << deleted << std::endl;
    list1.print();
    list1.insertAtBack(1);
    list1.insertAtFront(20);
    list1.insertAtFront(4);
    list1.insertAtFront(99);
    list1.print();
    list1.sortList();
    list1.print();
    list1.printListBackward();
    int data = 21;
    Node<int>* ptr = list1.findData(data);
    if (ptr)
    {
        std::cout << "\nFound " << data << std::endl;
    }
    else
    {
        std::cout << "\nCouldnt Find " << data << std::endl;
    }
    data = 5;
    ptr = list1.findData(data);
    if (ptr)
    {
        std::cout << "\nFound " << data  << std::endl;
    }
    else
    {
        std::cout << "\nCouldnt Find " << data << std::endl;
    }
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
