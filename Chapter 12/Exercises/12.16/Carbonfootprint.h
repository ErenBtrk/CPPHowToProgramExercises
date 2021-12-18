#ifndef CARBONFOOTPRINT_H_INCLUDED
#define CARBONFOOTPRINT_H_INCLUDED

class CarbonFootprint{
public:
    virtual ~CarbonFootprint(){};
    virtual void getCarbonFootprint()const = 0;
};



#endif // CARBONFOOTPRINT_H_INCLUDED
