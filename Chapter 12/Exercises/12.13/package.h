#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
#include <iostream>

class Person
{
    friend std::ostream &operator<<(std::ostream &output,const Person &p){
        output << "Name : " << p.name << "\nAddress : " << p.address << "\nCity : " << p.city << "\nState : " << p.state << "\nZipCode : " << p.ZIP;

        return output;
    }
public:
	Person(std::string Name, std::string Address, std::string City,
		std::string State, std::string Zip)
		:name(Name),
		address(Address),
		city(City),
		state(State),
		ZIP(Zip){}
	Person() {};
	std::string name;
	std::string address;
	std::string city;
	std::string state;
	std::string ZIP;
};




class Package{
public:
    Package(Person &,Person &,double,double);


    void setWeight(double);
    void setCostPerOunce(double);

    double getWeight()const;
    double getCostPerOunce()const;

    void print()const;
    virtual double calculateCost()const;

private:
    Person sender;
    Person recipient;
    double weight;
    double costPerOunce;


};





#endif // PACKAGE_H_INCLUDED
