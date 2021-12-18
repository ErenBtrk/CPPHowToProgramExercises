#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "package.h"

class OverNightPackage : public Package{
public:
    OverNightPackage(Person &,Person &,double,double,double);
    void setAdditionalFee(double);

    double getAdditionalFee()const;

    virtual double calculateCost()const override;
    void print()const;



private:
    double additionalFee;


};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
