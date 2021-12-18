#include <iostream>
#include "employee.h"

Employee::Employee(){}

void Employee::setHoursWorked(){
    std::cout << "Please enter hours worked ( -1 to end ) : " << std::endl;
    std::cin >> hoursWorked;
}
void Employee::setHourlyRate(){
    std::cout << "Please enter hourly rate : " << std::endl;
    std::cin >> hourlyRate;
}
void Employee::setSalary(){
    if ( hoursWorked <= 40){
        salary = hoursWorked * hourlyRate;
    }
    else{
        salary = 40 * hourlyRate + ((hoursWorked - 40)*(hourlyRate+hourlyRate/2));
    }
}

int Employee::getHoursWorked(){
    return hoursWorked;
}

double Employee::getHourlyRate(){
    return hourlyRate;
}

double Employee::getSalary(){
    return salary;
}

void Employee::displayGrossPay(){
    std::cout << "Salary is : $" << salary << std::endl;
}

void Employee::run(){
    while( hoursWorked != EOF ){
        setHoursWorked();
            if(hoursWorked == EOF){
                break;
            }
        setHourlyRate();
        setSalary();
        displayGrossPay();
    }
}
