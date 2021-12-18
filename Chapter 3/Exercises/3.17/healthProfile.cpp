#include <iostream>
#include <string>
#include "healthProfile.h"

HealthProfile::HealthProfile(const std::string &fName,const std::string &lName,int g,int d,int m,int y,int h,int w){
    setFirstName(fName);
    setLastName(lName);
    setGender(g);
    setDay(d);
    setMonth(m);
    setYear(y);
    setHeight(h);
    setWeight(w);
}

void HealthProfile::setFirstName(const std::string &fName){
    firstName = fName;
}
void HealthProfile::setLastName(const std::string &lName){
    lastName = lName;
}
void HealthProfile::setGender(int g){
    if(g == 0){
        gender = false;
    }
    else{
        gender = true;
    }
}
void HealthProfile::setDay(int d){
    day = d;
}
void HealthProfile::setMonth(int m){
    month = m;
}
void HealthProfile::setYear(int y){
    year = y;
}
void HealthProfile::setHeight(int h){
    height = h;
}
void HealthProfile::setWeight(int w){
    weight = w;
}
std::string HealthProfile::getFirstName(){
    return firstName;
}
std::string HealthProfile::getLastName(){
    return lastName;
}
bool HealthProfile::getGender(){
    return gender;
}
int HealthProfile::getDay(){
    return day;
}
int HealthProfile::getMonth(){
    return month;
}
int HealthProfile::getYear(){
    return year;
}
int HealthProfile::getHeight(){
    return height;
}
int HealthProfile::getWeight(){
    return weight;
}
int HealthProfile::getAge(int currentYear){
    return currentYear-year;
}
int HealthProfile::getMaximumHeartRate(int currentYear){
    return 220-getAge(currentYear);
}
void HealthProfile::getTargetHeartRateRange(int currentYear){
    std::cout << "Your target heart rate range is between " << getMaximumHeartRate(currentYear)*50/100 << " and "
    << getMaximumHeartRate(currentYear)*85/100 << std::endl;
}
double HealthProfile::getBodyMassIndex(){
    return weight/(((double)height/100)*((double)height/100));
}
