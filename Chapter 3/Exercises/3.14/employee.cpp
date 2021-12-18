#include <iostream>
#include <string>
#include "employee.h"

Employee::Employee(const std::string &fName,const std::string &lName,int salary){
    setFirstName(fName);
    setLastName(lName);
    setMonthlySalary(salary);
}

void Employee::setFirstName(const std::string &fName){
    firstName = fName;
}

void Employee::setLastName(const std::string &lName){
    lastName = lName;
}

void Employee::setMonthlySalary(int salary){
    if(salary < 0){
        monthlySalary = 0;
    }
    else{
        monthlySalary = salary;
    }
}

std::string Employee::getFirstName(){
    return firstName;
}

std::string Employee::getLastName(){
    return lastName;
}

int Employee::getMonthlySalary(){
    return monthlySalary;
}

void Employee::raise(int r){
    monthlySalary = monthlySalary+monthlySalary*r/100;
}

void Employee::displayYearlySalary(){
    std::cout << "First name : " << firstName
    << std::endl << "Last name : " << lastName
    << std::endl << "Yearly Salary : " << monthlySalary*12 << std::endl << std::endl;
}
