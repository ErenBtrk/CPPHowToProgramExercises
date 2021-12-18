#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include "Employee.h"

class HourlyWorker : public Employee{
public:
    HourlyWorker(const std::string &, const std::string &,const std::string &,double,double);
    virtual ~HourlyWorker(){}

    void setHours(double);
    double getHours()const;

    void setWage(double);
    double getWage()const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double hours;
    double wage;



};

#endif // HOURLYWORKER_H_INCLUDED
