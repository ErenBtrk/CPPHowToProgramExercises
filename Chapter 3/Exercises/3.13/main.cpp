#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main()
{
    Invoice i1("100","Motherboards",41,100);
    cout << "Object i1's part number = " << i1.getPartNumber() << endl;
    cout << "Object i1's part description = " << i1.getPartDescription() << endl;
    cout << "Object i1's quantity = " << i1.getQuantity() << endl;
    cout << "Object i1's price = " << i1.getPrice() << '$' << endl;
    cout << "Object i1's Invoice amount = " << i1.getInvoiceAmount() << '$' << endl << endl;

    Invoice i2("200","GPUs",53,500);
    cout << "Object i2's part number = " << i2.getPartNumber() << endl;
    cout << "Object i2's part description = " << i2.getPartDescription() << endl;
    cout << "Object i2's quantity = " << i2.getQuantity() << endl;
    cout << "Object i2's price = " << i2.getPrice() << '$' << endl;
    cout << "Object i2's Invoice amount = " << i2.getInvoiceAmount() << '$' << endl;
}
