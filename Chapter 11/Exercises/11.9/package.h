#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>

class Person
{
public:
	Person(std::string Name, std::string Address, std::string City,
		std::string State, std::string Zip)
		:name(Name),
		address(Address),
		city(City),
		state(State),
		ZIP(Zip)
	{

	}
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
    double calculateCost()const;

    void setWeight(double);
    void setCostPerOunce(double);

    double getWeight()const;
    double getCostPerOunce()const;
private:
    Person sender;
    Person recipient;
    double weight;
    double costPerOunce;


};





#endif // PACKAGE_H_INCLUDED
