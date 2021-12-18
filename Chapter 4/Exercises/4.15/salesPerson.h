#ifndef SALESPERSON_H_INCLUDED
#define SALESPERSON_H_INCLUDED

class SalesPerson{
private:
    double grossSales;
public:
    SalesPerson();
    void setGrossSales();
    double getGrossSales()const;
    void displayEarnings()const;
    void run();

};


#endif // SALESPERSON_H_INCLUDED
