#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

int main()
{
    Employee e1("Ali","Veli",3500);
    e1.displayYearlySalary();
    Employee e2("Ayse","Fatma",2700);
    e2.displayYearlySalary();
    Employee e3("Isa","Musa",-1000);
    e3.displayYearlySalary();
    e1.raise(10);
    e2.raise(5);
    e3.raise(1);
    cout << "e1 object's yearly salary after raise : " << endl;
    e1.displayYearlySalary();
    cout << "e2 object's yearly salary after raise : " << endl;
    e2.displayYearlySalary();
    cout << "e3 object's yearly salary after raise : " << endl;
    e3.displayYearlySalary();
}


