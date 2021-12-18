#include <iostream>
#include "product.h"


using namespace std;

int main()
{
    Product p1;
        for(int i = 1 ; i <= 5 ; i++){
            p1.setProductNo(i);
            p1.setProductPrice();
            p1.setQuantitySold();
            p1.setTotalRetailValue();
            p1.displayDetails();
        }

}
