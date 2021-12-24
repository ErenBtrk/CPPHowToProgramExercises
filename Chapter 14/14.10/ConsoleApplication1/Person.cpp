#include "Person.h"

Person::Person() :id(0), age(0), firstName(""), lastName("")
{

}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setId(int id)
{
	this->id = id;
}

void Person::setFirstName(const std::string fName)
{
	fName.copy(firstName,fName.length());
}

void Person::setLastName(const std::string lName)
{
	lName.copy(lastName,lName.length());
}

int Person::getAge()const
{
	return age;
}

int Person::getId()const
{
	return id;
}

std::string Person::getFirstName()const
{
	return firstName;
}


std::string Person::getLastName()const
{
	return lastName;
}
