#ifndef SALESPERSON_H_INCLUDED
#define SALESPERSON_H_INCLUDED

class SalesPerson{
private:
    int unitsSold;
public:
    SalesPerson();
    void setUnitsSold(int);
    int getUnitsSold();
    void displayDetails();
};

void findLargest(SalesPerson &s);



#endif // SALESPERSON_H_INCLUDED
