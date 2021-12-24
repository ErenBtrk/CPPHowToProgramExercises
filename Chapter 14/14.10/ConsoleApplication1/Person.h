#pragma once
#include <iostream>

class Person
{
public:
	Person();
	// accessor functions for id
	~Person()
	{
	}
	void setId(int);
	int getId() const;
	// accessor functions for lastName
	void setLastName(const std::string );
	std::string getLastName() const;
	// accessor functions for firstName
	void setFirstName(const std::string);
	std::string getFirstName() const;
	// accessor functions for age
	void setAge(int);
	int getAge() const;
private:
	char firstName[15];
	char lastName[15];
	int age;
	int id;
};