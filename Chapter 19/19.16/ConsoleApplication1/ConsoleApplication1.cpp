// Fig. 19.20: fig19_20.cpp
// Creating and traversing a binary tree.
#include <iostream>
#include <iomanip>
#include "Tree.h" // Tree class definition
using namespace std;

int main() {
    Tree<int> intTree; // create Tree of int values

    intTree.insertData(2);
    intTree.insertData(1);
    intTree.insertData(3);
    intTree.insertData(4);
    intTree.insertData(5);
    intTree.insertData(7);
    std::cout << "inorder traversal : " << std::endl;
    intTree.inOrderTraversal();
    std::cout << "\npreorder traversal : " << std::endl;
    intTree.preOrderTraversal();
    std::cout << "\npostorder traversal : " << std::endl;
    intTree.postOrderTraversal();

    
}


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
