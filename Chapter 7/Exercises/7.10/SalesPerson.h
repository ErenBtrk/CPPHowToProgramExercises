#ifndef SALESPERSON_H_INCLUDED
#define SALESPERSON_H_INCLUDED
#include <array>

const size_t frequencySize = 11 ;

class SalesPerson{
private:
    int salary;
    int grossSale;
    std::array < int , frequencySize > rangeFrequency;
public:
    SalesPerson();
    void setSalary();
    void setGrossSale();

    void rangeDetails();
    void displayRange()const;
    void run();

};



#endif // SALESPERSON_H_INCLUDED
