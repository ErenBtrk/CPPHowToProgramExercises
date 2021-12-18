#include <iostream>
#include "healthProfile.h"

using namespace std;

int main()
{
    string firstName;
    string lastName;
    bool gender;
    int day;
    int month;
    int year;
    int height;
    int weight;
    int cDay;
    int cMonth;
    int cYear;
        cout << "Please enter your first name and last name : " << endl;
        cin >> firstName >> lastName ;
        cout << "Please enter your gender [1]=male , [0]=female" << endl;
        cin >> gender;
        cout << "Please enter your birthday (dd mm yyyy) : " << endl;
        cin >> day >> month >> year;
        cout << "Please enter your height in cm : " << endl;
        cin >> height ;
        cout << "Please enter your weight in kg : " << endl;
        cin >> weight;
        cout << "Please enter current date (dd mm yyyy) : " << endl;
        cin >> cDay >> cMonth >> cYear;

        HealthProfile hp1(firstName,lastName,gender,day,month,year,height,weight);

        cout << "Your age is = " << hp1.getAge(cYear) << endl;
        cout << "Your maximum heart rate is = " << hp1.getMaximumHeartRate(cYear) << endl;
        hp1.getTargetHeartRateRange(cYear);
        cout << "Your body mass index is = " << hp1.getBodyMassIndex() << endl;

}
