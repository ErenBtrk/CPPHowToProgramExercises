// Fig. 12.3: fig12_03.cpp
// Attempting to invoke derived-class-only member functions
// via a base-class pointer.
#include <string>
#include "commissionEmployee.h"
#include "basePlus.h"

using namespace std;

int main()
 {
 CommissionEmployee *commissionEmployeePtr = nullptr; // base class ptr
 BasePlusCommissionEmployee basePlusCommissionEmployee(
 "Bob", "Lewis", "333-33-3333", 5000, .04, 300 ); // derived class

 // aim base-class pointer at derived-class object (allowed)
 commissionEmployeePtr = &basePlusCommissionEmployee;

 // invoke base-class member functions on derived-class
 // object through base-class pointer (allowed)
 string firstName = commissionEmployeePtr->getFirstName();
 string lastName = commissionEmployeePtr->getLastName();
 string ssn = commissionEmployeePtr->getSocialSecurityNumber();
 double grossSales = commissionEmployeePtr->getGrossSales();
 double commissionRate = commissionEmployeePtr->getCommissionRate();

 // attempt to invoke derived-class-only member functions
 // on derived-class object through base-class pointer (disallowed)
 double baseSalary = commissionEmployeePtr->getBaseSalary();
 commissionEmployeePtr->setBaseSalary( 500 );
 } // end main

