#include <iostream>
#include <string>
#include "invoice.h"

Invoice::Invoice(const std::string &pNum,const std::string &pDesc,int q,int p){
    setPartNumber(pNum);
    setPartDescription(pDesc);
    setQuantity(q);
    setPrice(p);
}

void Invoice::setPartNumber(const std::string &pNum){
    partNumber = pNum;
}

void Invoice::setPartDescription(const std::string &pDesc){
    partDescription = pDesc;
}

void Invoice::setQuantity(int q){
    if(q < 0){
        quantity = 0;
        std::cout << "The quantity set to 0." << std::endl;
    }
    else{
        quantity = q;
    }
}

void Invoice::setPrice(int p){
    if(p < 0){
        price = 0;
    }
    else{
        price = p;
    }
}

std::string Invoice::getPartNumber(){
    return partNumber;
}

std::string Invoice::getPartDescription(){
    return partDescription;
}

int Invoice::getQuantity(){
    return quantity;
}

int Invoice::getPrice(){
    return price;
}

int Invoice::getInvoiceAmount(){
    return quantity*price;
}

