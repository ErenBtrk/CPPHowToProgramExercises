#include "package.h"
#include <stdexcept>

Package::Package(Person &Sender,Person &Recipient,double weight,double costPerOunce)
                          :sender(Sender),recipient(Recipient){
                            setWeight(weight);
                            setCostPerOunce(costPerOunce);
                          }

double Package::calculateCost()const{
    return weight * getCostPerOunce();
}


void Package::setWeight(double weight){
    if( weight > 0 ){
        this->weight = weight;
    }
    else{
        throw std::invalid_argument("Weight must be a positive value.");
    }
}

void Package::setCostPerOunce(double costPerOunce){
    if( costPerOunce > 0 ){
        this->costPerOunce = costPerOunce;
    }
    else{
        throw std::invalid_argument("Cost per ounce must be a positive value.");
    }
}



double Package::getWeight()const{
    return weight;
}

double Package::getCostPerOunce()const{
    return costPerOunce;
}

void Package::print()const{
    std::cout << "Sender : " << std::endl;
    std::cout << sender << std::endl << std::endl;
    std::cout << "Recipient : " << std::endl;
    std::cout << recipient << std::endl;
    std::cout << "Shipping Cost : " <<  calculateCost() << std::endl;

}
