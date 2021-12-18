#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

class Product{
private:
    int productNo;
    double productPrice;
    int quantitySold;
    double totalRetailValue;
public:
    Product();
    void setProductNo(int);
    void setProductPrice();
    void setQuantitySold();
    void setTotalRetailValue();
    void displayDetails();


};


#endif // PRODUCT_H_INCLUDED
