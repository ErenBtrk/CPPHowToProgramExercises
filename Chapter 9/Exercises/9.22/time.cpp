// Fig. 9.5: Time.cpp
 // Member-function definitions for class Time.
 #include <iostream>
 #include <iomanip>
 #include <stdexcept>
 #include "Time.h" // include definition of class Time from Time.h
 using namespace std;

 // Time constructor initializes each data member
Time::Time( int second )
{
setTime(  second ); // validate and set time
} // end Time constructor

 // set new Time value using universal time
 void Time::setTime( int s )
 {
 setHour( s ); // set private field hour
 setMinute( s ); // set private field minute
 setSecond( s ); // set private field second
 } // end function setTime

 // set hour value
 void Time::setHour( int s )
 {
    if( s < 3600 ){
        hour = 0;
    }
    else{
        hour = s / 3600 ;
    }

 } // end function setHour

 // set minute value
 void Time::setMinute( int s )
 {
     if( hour == 0 ){
        minute = s / 60;
     }
     else{
        minute = s - hour * 3600;
        if( minute >= 60 ){
            minute /= 60;
        }
     }


 } // end function setMinute

  // set second value
 void Time::setSecond( int s )
 {
    if(hour == 0 && minute == 0){
        second = s;
    }
    else{
        second = s - ( hour * 3600 + minute * 60 );
    }

 } // end function setSecond

 // return hour value
 unsigned int Time::getHour() const
 {
 return hour;
 } // end function getHour

 // return minute value
 unsigned Time::getMinute() const
 {
 return minute;
 } // end function getMinute

 // return second value
 unsigned Time::getSecond() const
 {
 return second;
 } // end function getSecond

 // print Time in universal-time format (HH:MM:SS)
 void Time::printUniversal() const
 {
 cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
 << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
  cout << endl;
 } // end function printUniversal

 // print Time in standard-time format (HH:MM:SS AM or PM)
 void Time::printStandard() const
 {
 cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
 << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
 << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
 cout << endl;
 } // end function printStandard
