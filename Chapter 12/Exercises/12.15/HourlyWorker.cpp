#include <iostream>
#include "HourlyWorker.h"


HourlyWorker::HourlyWorker(const std::string &first,const std::string &last, const std::string &ssn,double h,double w)
                                            :Employee(first,last,ssn){
                                                setHours(h);
                                                setWage(w);
                                            }


void HourlyWorker::setHours(double h){
    hours = h;
}

double HourlyWorker::getHours()const{
    return hours;
}

void HourlyWorker::setWage(double w){
    wage = w;
}

double HourlyWorker::getWage()const{
    return wage;
}

double HourlyWorker::earnings()const{
    if( getHours() <= 40.0 ){
        return hours*wage;
    }
    else{
        return ( 40.0 * wage )+ ( ( hours - 40.0 ) * wage * 1.5 );
    }
}

void HourlyWorker::print()const{
    std::cout << "Hourly worker :" << std::endl;
    Employee::print();
    std::cout << std::endl;
    std::cout << "Wage : " << getWage() << " Hours : " << getHours() ;
}
