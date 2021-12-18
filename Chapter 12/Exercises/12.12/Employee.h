// Fig. 12.9: Employee.h
// Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ standard string class
#include "date.h"

class Employee
 {
 public:
 Employee( const std::string &, const std::string &,
 const std::string & ,Date & );
 virtual ~Employee() { } // virtual destructor

 void setBirthDate( Date & );
 Date getBirthDate()const;

 void setFirstName( const std::string & ); // set first name
 std::string getFirstName() const; // return first name

 void setLastName( const std::string & ); // set last name
 std::string getLastName() const; // return last name

 void setSocialSecurityNumber( const std::string & ); // set SSN
 std::string getSocialSecurityNumber() const; // return SSN

// pure virtual function makes Employee an abstract base class
virtual double earnings() const = 0; // pure virtual
virtual double calculatePayroll() const = 0;
virtual void print() const; // virtual


private:
 std::string firstName;
 std::string lastName;
 std::string socialSecurityNumber;
 Date birthDate;
 }; // end class Employee

 #endif // EMPLOYEE_H
