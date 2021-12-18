// Fig. 9.5: Time.cpp
 // Member-function definitions for class Time.
 #include <iostream>
 #include <iomanip>
 #include <stdexcept>
 #include "Time.h" // include definition of class Time from Time.h
 using namespace std;

 // Time constructor initializes each data member
Time::Time( int hour, int minute, int second )
{
setTime( hour, minute, second ); // validate and set time
} // end Time constructor

 // set new Time value using universal time
 void Time::setTime( int h, int m, int s )
 {
 if(setHour( h ) == -1){ // set private field hour
    cout << "\nInvalid value for hour" << endl;
    cout << "Hour is defaulted" << endl;
 }
 else{
    hour = setHour( h );
 }

 if(setMinute( m ) == -1){ // set private field minute
    cout << "\nInvalid value for minute" << endl;
    cout << "Minute is defaulted" << endl;
 }
 else{
    minute = setMinute( m );
 }

 if( setSecond( s ) == -1){ // set private field second
    cout << "\nInvalid value for minute" << endl;
    cout << "Second is defaulted" << endl;
 }
 else{
    second = setSecond( s );
 }

 } // end function setTime

 // set hour value
 int Time::setHour( int h )
 {
 if ( h >= 0 && h < 24 )
 return h;
 else
 return -1;
 } // end function setHour

 // set minute value
 int Time::setMinute( int m )
 {
 if ( m >= 0 && m < 60 )
 return m;
 else
 return -1;
 } // end function setMinute

  // set second value
 int Time::setSecond( int s )
 {
 if ( s >= 0 && s < 60 )
 return s;
 else
 return -1;
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
 } // end function printUniversal

 // print Time in standard-time format (HH:MM:SS AM or PM)
 void Time::printStandard() const
 {
 cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
 << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
 << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
 } // end function printStandard
