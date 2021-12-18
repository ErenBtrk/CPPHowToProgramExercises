#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

class Employee{
private:
    int hoursWorked;
    double hourlyRate;
    double salary;
public:
    Employee();
    void setHoursWorked();
    void setHourlyRate();
    void setSalary();
    int getHoursWorked();
    double getHourlyRate();
    double getSalary();
    void displayGrossPay();
    void run();

};



#endif // EMPLOYEE_H_INCLUDED
