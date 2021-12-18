// Fig. 9.6: fig09_06.cpp
 // Constructor with default arguments.
 #include <iostream>
 #include <stdexcept>
 #include "Time.h" // include definition of class Time from Time.h
 using namespace std;

int main(){
    Time t1; // all arguments defaulted
    Time t2( 600 ); // hour specified; minute and second defaulted
    Time t3( 3600 ); // hour and minute specified; second defaulted
    Time t4( 41 ); // hour, minute and second specified
    Time t5( 13456 );

     t1.printUniversal();
     t2.printUniversal();
     t3.printUniversal();
     t4.printUniversal();
     t5.printUniversal();

 } // end main
