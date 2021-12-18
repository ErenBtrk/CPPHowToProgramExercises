#include <iostream>
#include "heartRates.h"

using namespace std;

int main()
{
    string firstName;
    string lastName;
    int day;
    int month;
    int year;
    int cDay;
    int cMonth;
    int cYear;
        cout << "Please enter your first name : " << endl;
        cin >> firstName;
        cout << "Please enter your last name : " << endl;
        cin >> lastName;
        cout << "Please enter your birthday (dd mm yyyy) : " << endl;
        cin >> day >> month >> year ;
        cout << "Please enter current date (dd mm yyyy) : " << endl;
        cin >> cDay >> cMonth >> cYear;

        HeartRates hr1(firstName,lastName,day,month,year);
        cout << "Your maximum heart rate is = " << hr1.getMaximumHeartRate(cYear) << endl;
        hr1.getTargetHeartRate(cYear);
 }
