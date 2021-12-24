// Fig. 10.3: PhoneNumber.h
// PhoneNumber class definition
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class PhoneNumber {
	friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);
	friend std::istream& operator>>(std::istream&, PhoneNumber&);
public:
	PhoneNumber(const std::string& , const std::string& , const std::string& );
private:
	std::string areaCode; // 3-digit area code 
	std::string exchange; // 3-digit exchange 
	std::string line; // 4-digit line 
};

#endif