// Fig. 13.3: fig13_03.cpp
// Printing the address stored in a char * variable.
#include <iostream>

using namespace std;

int main()
 {
 const char *const word = "again";

 // display value of char *, then display value of char *
 // after a static_cast to void *
 cout << "Value of word is: " << word << endl
 << "Value of static_cast< const void * >( word ) is: "
 << static_cast< const void * >( word ) << endl;

 } // end main
