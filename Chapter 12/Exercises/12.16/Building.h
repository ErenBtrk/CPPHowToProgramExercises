#ifndef BUILDING_H_INCLUDED
#define BUILDING_H_INCLUDED

#include "Carbonfootprint.h"

class Building: public CarbonFootprint
{
    public:
        Building(const double); //constructor
        virtual ~Building()
        {
        } // destructor

        virtual void getCarbonFootprint() const override;
    private:
        double squareFeet;
};


#endif // BUILDING_H_INCLUDED
