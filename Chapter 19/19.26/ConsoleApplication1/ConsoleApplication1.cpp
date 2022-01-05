// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

int main()
{
    
    Queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.printQueue();
    int popped;
    if (queue.pop(popped))
    {
        std::cout << popped << " is deleted." << std::endl;
    }
    if (queue.pop(popped))
    {
        std::cout << popped << " is deleted." << std::endl;
    }
    if (queue.pop(popped))
    {
        std::cout << popped << " is deleted." << std::endl;
    }
    if (queue.pop(popped))
    {
        std::cout << popped << " is deleted." << std::endl;
    }
    if (queue.pop(popped))
    {
        std::cout << popped << " is deleted." << std::endl;
    }
    /*LinkedList<int> list;
    list.insertAtBack(1);
    list.insertAtFront(3);
    list.print();
    int removed;
    list.removeFromBack(removed);
    std::cout << removed << " removed." << std::endl;
    list.print();
    list.removeFromFront(removed);
    std::cout << removed << " removed." << std::endl;
    list.print();*/
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
