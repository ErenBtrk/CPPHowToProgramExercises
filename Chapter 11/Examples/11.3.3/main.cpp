#include <iostream>
#include "basePlus.h"
#include "commissionEmployee.h"


using namespace std;

int main(){
    BasePlusCommissionEmployee employee("ali","veli","32423423",3000,0.2,1000);
    cout << employee.earnings();





    return 0;
}
