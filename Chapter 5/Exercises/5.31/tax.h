#ifndef TAX_H_INCLUDED
#define TAX_H_INCLUDED

class Tax{
private:
    double housingExpense;
    double foodExpense;
    double clothingExpense;
    double transportationExpense;
    double educationExpense;
    double healthExpense;
    double vacationExpense;
    double totalExpense;
    double totalTax;

public:
    Tax();
    void setHousing();
    void setFood();
    void setClothing();
    void setTransportation();
    void setEducation();
    void setHealth();
    void setVacation();
    void setTotal();
    void countTaxes();
    void display();

    void run();





};


#endif // TAX_H_INCLUDED
