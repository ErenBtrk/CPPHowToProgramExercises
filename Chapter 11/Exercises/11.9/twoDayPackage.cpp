#include "twoDayPackage.h"


TwoDayPackage::TwoDayPackage(Person &Sender,Person &Recipient,double weight,double costPerOunce,double flatFee)
                                                    :Package(Sender,Recipient,weight,costPerOunce){
                                                        setFlatFee(flatFee);
                                                    }


void TwoDayPackage::setFlatFee(double flatFee){
    this->flatFee = flatFee;
}

double TwoDayPackage::getFlatFee()const{
    return flatFee;
}

double TwoDayPackage::calculateCost()const{
    return Package::calculateCost() + getFlatFee();
}
