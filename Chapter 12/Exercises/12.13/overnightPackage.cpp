#include "overnightPackage.h"

OverNightPackage::OverNightPackage(Person &Sender,Person &Recipient,double weight,double costPerOunce,double additionalFee)
                                                    :Package(Sender,Recipient,weight,costPerOunce){
                                                        setAdditionalFee(additionalFee);
                                                    }

void OverNightPackage::setAdditionalFee(double additionalFee){
    this->additionalFee = additionalFee;
}

double OverNightPackage::getAdditionalFee()const{
    return additionalFee;
}

double OverNightPackage::calculateCost()const{
    return Package::calculateCost() + Package::getWeight() * getAdditionalFee();
}

void OverNightPackage::print()const{
    Package::print();
}
