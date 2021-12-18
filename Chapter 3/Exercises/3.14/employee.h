#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>

class Employee{
private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;
public:
    Employee(const std::string &,const std::string &,int);
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setMonthlySalary(int);
    std::string getFirstName();
    std::string getLastName();
    int getMonthlySalary();
    void raise(int);
    void displayYearlySalary();




};


#endif // EMPLOYEE_H_INCLUDED
