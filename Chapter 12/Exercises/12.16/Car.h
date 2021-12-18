#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "CarbonFootprint.h"

class Car: public CarbonFootprint
{
public:
    Car(const double); //constructor
    virtual ~Car()
    {
    } //destructor
    virtual void getCarbonFootprint() const override;
private:
    double gallonsOfGas;
};


#endif // CAR_H_INCLUDED
