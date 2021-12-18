#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "package.h"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(Person &,Person &,double,double,double);
    void setFlatFee(double);

    double getFlatFee()const;

    double calculateCost()const;
private:
    double flatFee;



};

#endif // TWODAYPACKAGE_H_INCLUDED
