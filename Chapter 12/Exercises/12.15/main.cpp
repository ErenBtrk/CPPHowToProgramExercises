#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

using namespace std;

int main()
{
    vector < Employee* > employees(5);
    employees[0] = new CommissionEmployee("Hasan","Osman","100",500,0.05);
    employees[1] = new BasePlusCommissionEmployee("Ayse","Fatma","101",500,0.05,100);
    employees[2] = new SalariedEmployee("Isa","Musa","102",1000);
    employees[3] = new PieceWorker("Haydar","Kamuran","103",30,15);
    employees[4] = new HourlyWorker("Ahmet","Mehmet","104",51,15);

    for( Employee * employeePtr : employees ){
        cout << "Employee type : " <<typeid(*employeePtr).name() << endl;
        employeePtr->print();
        cout << endl;
        cout << "Total earnings : " << employeePtr->earnings();
        cout << endl << endl;
    }

}
