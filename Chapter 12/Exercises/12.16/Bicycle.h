#ifndef BICYCLE_H_INCLUDED
#define BICYCLE_H_INCLUDED

#include "CarbonFootprint.h"

class Bicycle: public CarbonFootprint
{
public:
    Bicycle(); //constructor
    virtual ~Bicycle(){} //destructor
    virtual void getCarbonFootprint() const override;
};


#endif // BICYCLE_H_INCLUDED
