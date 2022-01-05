// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include "Str.h"
#include "Tree.h"

int main()
{
    Tree<std::string> stringsTree;
    char sentence[80], * tokenPtr;

    std::cout << "Enter a sentence:\n";
    std::cin.getline(sentence, 80);
    char* nextToken;
    tokenPtr = strtok_s(sentence," ",&nextToken);

    while (tokenPtr != nullptr)
    {
        std::string* newStrings = new std::string(tokenPtr);
        stringsTree.insertData(*newStrings);
        tokenPtr = strtok_s(0, " ",&nextToken);
    }

    

    std::cout << "\nPreorder traversal\n";
    stringsTree.preOrderTraversal();

    std::cout << "\n InOrder traversal\n";
    stringsTree.inOrderTraversal();
   
    std::cout << "\n PostOrder traversal\n";
    stringsTree.postOrderTraversal();

    std::cout << std::endl;
    
    

    
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
