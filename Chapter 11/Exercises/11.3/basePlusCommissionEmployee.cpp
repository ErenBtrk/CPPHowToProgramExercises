// Fig. 11.15: BasePlusCommissionEmployee.cpp
// Class BasePlusCommissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "basePlusCommissionEmployee.h"

using namespace std;

// constructor
 BasePlusCommissionEmployee::BasePlusCommissionEmployee(
 const string &first, const string &last, const string &ssn,
 double sales, double rate, double salary )
 // explicitly call base-class constructor
 : employee(first,last,ssn,sales,rate)
 {
 setBaseSalary( salary ); // validate and store base salary
 } // end BasePlusCommissionEmployee constructor

 // set base salary
 void BasePlusCommissionEmployee::setBaseSalary( double salary )
 {
 if ( salary >= 0.0 )
 baseSalary = salary;
 else
 throw invalid_argument( "Salary must be >= 0.0" );
 } // end function setBaseSalary

 // return base salary
 double BasePlusCommissionEmployee::getBaseSalary() const
 {
 return baseSalary;
 } // end function getBaseSalary

 // calculate earnings
 double BasePlusCommissionEmployee::earnings() const
 {
 return getBaseSalary() + employee.earnings();
 } // end function earnings

 // print BasePlusCommissionEmployee object
 void BasePlusCommissionEmployee::print() const
 {
 cout << "base-salaried ";
 // invoke CommissionEmployee's print function
 employee.print();
 cout << "\nbase salary: " << getBaseSalary();
 } // end function print
