// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IndexedListString.h"

int main()
{
    IndexedListString list;
    list.insertInIndexedList("Ali");
    list.insertInIndexedList("Zeynep");
    list.insertInIndexedList("Veli");
    list.insertInIndexedList("Ayse");
    list.insertInIndexedList("Fatma");
    list.insertInIndexedList("Esra");
    list.insertInIndexedList("Osman");
    list.insertInIndexedList("Burak");
    list.insertInIndexedList("Tuna");
    list.insertInIndexedList("Emre");
    list.insertInIndexedList("Ezgi");
    list.print();
    if (list.searchIndexedList("Zeynep"))
    {
        std::cout << "Found the string." << std::endl;
    }
    else
    {
        std::cout << "Couldnt Found the string." << std::endl;
    }
    
    list.deleteFromIndexedList("Ezgi");
    
    list.print();
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
