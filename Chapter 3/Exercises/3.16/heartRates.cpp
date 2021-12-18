#include <iostream>
#include <string>
#include "heartRates.h"

HeartRates::HeartRates(const std::string &fName,const std::string &lName,int d,int m,int y){
    setFirstName(fName);
    setLastName(lName);
    setDay(d);
    setMonth(m);
    setYear(y);
}

void HeartRates::setFirstName(const std::string &fName){
    firstName = fName;
}
void HeartRates::setLastName(const std::string &lName){
    lastName = lName;
}
void HeartRates::setDay(int d){
    day = d;
}
void HeartRates::setMonth(int m){
    month = m;
}
void HeartRates::setYear(int y){
    year = y;
}
std::string HeartRates::getFirstName() const{
    return firstName;
}
std::string HeartRates::getLastName() const{
    return lastName;
}
int HeartRates::getDay() const{
    return day;
}
int HeartRates::getMonth() const{
    return month;
}
int HeartRates::getYear() const{
    return year;
}
int HeartRates::getAge(int currentYear) const{
    return currentYear - year;
}
int HeartRates::getMaximumHeartRate(int currentYear) const{
    return 220-getAge(currentYear);
}
void HeartRates::getTargetHeartRate(int currentYear) const{
    std::cout << "Your target heart rate is between " << getMaximumHeartRate(currentYear)*50/100
    << " and " << getMaximumHeartRate(currentYear)*85/100 << std::endl;
}
