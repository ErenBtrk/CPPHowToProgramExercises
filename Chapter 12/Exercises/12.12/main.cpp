#include <iostream>
#include "Employee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "SalariedEmployee.h"
#include <vector>

using namespace std;

int main()
{
    vector < Employee* > employees(3);
    Date d1(10,15,1982);
    Date d2(5,11,1987);
    Date d3(1,3,1990);

    employees[0] = new CommissionEmployee("Sue", "Jones", "333-33-3333",d1, 10000, .06);
    employees[1] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444",d2, 5000, .04, 300);
    employees[2] = new SalariedEmployee("John", "Smith", "111-11-1111",d3, 800);

    for( Employee *employeePtr : employees ){
        employeePtr->print();
        cout << " Earnings : " << employeePtr->earnings() << endl;
        cout << endl << endl;
    }

    int currentMonth = 5;
    for ( Employee *ePtr : employees )
	{
		double bonus = 0;
		if (ePtr->getBirthDate().getMonth() == currentMonth)
		{
			bonus = 100;
		}
		std::cout << typeid(*ePtr).name() << ": " << ePtr->getBirthDate() << "\n";
		bonus == 100 ? (std::cout << "Birthday bonus: " << bonus << '\n') : ( std::cout << "");
		std::cout << "Payroll: " << ePtr->calculatePayroll() + bonus << "\n\n";

		delete ePtr;
		ePtr = NULL;
	}


}
