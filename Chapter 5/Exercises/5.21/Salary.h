#ifndef SALARY_H_INCLUDED
#define SALARY_H_INCLUDED
#include <iostream>

class Salary{
private:
    int payCode;
    std::string payType;
    double payAmount;
public:
    Salary();
    void setPayCode();
    void setPayType();
    void setPayAmount();
    int getPayCode()const;
    std::string getPayType()const;
    int getPayAmount()const;
    void displayDetails()const;
    void run();

};



#endif // SALARY_H_INCLUDED
