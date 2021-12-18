#include <iostream>
#include <iomanip>
#include "product.h"


Product::Product():productNo(0),productPrice(0.0),quantitySold(0),totalRetailValue(0.0){}

void Product::setProductNo(int proNo){
    productNo = proNo;
}

void Product::setProductPrice(){
    switch (productNo){
    case 1:
        productPrice = 2.98;
        break;
    case 2:
        productPrice = 4.50;
        break;
    case 3:
        productPrice = 9.98;
        break;
    case 4:
        productPrice = 4.49;
        break;
    case 5:
        productPrice = 6.87;
        break;
    default:
        std::cout << "There is no product with this number ..." << std::endl;
        break;
    }
}

void Product::setQuantitySold(){
    std::cout << "Please enter quantity of the product that has been sold : " ;
    std::cin >> quantitySold ;
}

void Product::setTotalRetailValue(){
    totalRetailValue += quantitySold * productPrice;
}

void Product::displayDetails(){
    std::cout << std::setw(12) << "Product No" << std::setw(15) << "ProductPrice" <<
    std::setw(16) << "Quantity Sold" << std::setw(8) << "Total" << std::endl;
    std::cout << std::setw(12) << productNo << std::setw(15) << productPrice <<
    std::setw(16) << quantitySold << std::setw(8) << std::setprecision(4) << totalRetailValue << std::endl;
}


