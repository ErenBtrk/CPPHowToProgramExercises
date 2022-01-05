// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tree.h"
int main()
{
	Tree<int> tree;
	tree.insertNode(49);
	tree.insertNode(83);
	tree.insertNode(28);
	tree.insertNode(19);
	tree.insertNode(11);
	tree.insertNode(32);
	tree.insertNode(44);
	tree.insertNode(69);
	tree.insertNode(72);
	tree.insertNode(92);
	tree.insertNode(99);
	tree.insertNode(18);
	tree.insertNode(40);
	tree.insertNode(71);
	tree.insertNode(97);
	

	tree.levelOrderTraversal();
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
