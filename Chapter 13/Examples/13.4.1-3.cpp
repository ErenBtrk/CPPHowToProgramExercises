// Fig. 13.6: fig13_06.cpp
// Inputting characters using cin member function getline.
#include <iostream>

using namespace std;


int main()
 {
 const int SIZE = 80;
 char buffer[ SIZE ]; // create array of 80 characters


 // input characters in buffer via cin function getline
 cout << "Enter a sentence:" << endl;
 cin.getline( buffer, SIZE );

 // display buffer contents
 cout << "\nThe sentence entered is:" << endl << buffer << endl;


 } // end main
