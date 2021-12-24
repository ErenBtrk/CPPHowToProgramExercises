// Fig. 10.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

PhoneNumber::PhoneNumber(const std::string &area, const std::string &ex, const std::string &line):areaCode(area),exchange(ex),line(line)
{

}

// overloaded stream insertion operator; cannot be a member function
// if we would like to invoke it with cout << somePhoneNumber; 
ostream& operator<<(ostream& output, const PhoneNumber& number) {
    output << "Area code: " << number.areaCode << "\nExchange: "
        << number.exchange << "\nLine: " << number.line << "\n"
        << "(" << number.areaCode << ") " << number.exchange << "-"
        << number.line << "\n";
    return output; // enables cout << a << b << c;                
}

// overloaded stream extraction operator; cannot be a member function
// if we would like to invoke it with cin >> somePhoneNumber;
istream& operator>>(istream& input, PhoneNumber& number) {
    input.ignore(); // skip (                               
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2); // skip ) and space                   
    input >> setw(3) >> number.exchange; // input exchange 
    input.ignore(); // skip dash (-)                         
    input >> setw(4) >> number.line; // input line         
    return input; // enables cin >> a >> b >> c;             
}