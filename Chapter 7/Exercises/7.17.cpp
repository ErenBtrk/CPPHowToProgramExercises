// Ex. 7.17: Ex07_17.cpp
 // What does this program do?
 #include <iostream>
 #include <array>
 using namespace std;

const size_t arraySize = 10;
 int whatIsThis( const array< int, arraySize > &, size_t ); // prototype

 int main()
 {
 array< int, arraySize > a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int result = whatIsThis( a, arraySize );

 cout << "Result is " << result << endl;
 } // end main

 // What does this function do?
 int whatIsThis( const array< int, arraySize > &b, size_t size )
 {
 if ( size == 1 ) // base case
 return b[ 0 ];
 else // recursive step
 return b[ size - 1 ] + whatIsThis( b, size - 1 );
 } // end function whatIsThis

 // my answer : whatIsThis() function does calculate the sum of the array
