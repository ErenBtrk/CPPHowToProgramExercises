 // Fig. 10.12: fig10_12.cpp
 // Single-argument constructors and implicit conversions.
 #include <iostream>
 #include "Array.h"
 using namespace std;

void outputArray( const Array & ); // prototype

int main()
 {
 Array integers1( 7 ); // 7-element Array
 outputArray( integers1 ); // output Array integers1
 outputArray( 3 ); // convert 3 to an Array and output Array’s contents
 } // end main

 // print Array contents
 void outputArray( const Array &arrayToOutput )
 {
 cout << "The Array received has " << arrayToOutput.getSize()
 << " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray
