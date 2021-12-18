#include <iostream>
 using namespace std;

int main()
 {
     unsigned int row = 10; // initialize row


 while ( row >= 1 ) // loop until row < 1
 {
 unsigned int column = 1; // set column to 1 as iteration begins

 while ( column <= row ) // loop 10 times
 {
 cout << ( row % 2 ? "<" : ">" ); // output
 ++column; // increment column
 } // end inner while

 --row; // decrement row
 cout << endl; // begin new output line
 } // end outer while
 } // end main
