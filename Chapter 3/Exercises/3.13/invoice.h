#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <iostream>

class Invoice{
private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int price;
public:
    Invoice(const std::string &,const std::string &,int ,int );
    void setPartNumber(const std::string &);
    void setPartDescription(const std::string &);
    void setQuantity(int);
    void setPrice(int);
    std::string getPartNumber();
    std::string getPartDescription();
    int getQuantity();
    int getPrice();
    int getInvoiceAmount();

};


#endif // INVOICE_H_INCLUDED
