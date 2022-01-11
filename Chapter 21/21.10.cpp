#include <iostream>
#include <string>

int main()
{
    std::string fName;
    std::string lName;
    std::cout << "Enter first name :";
    std::cin >> fName;
    std::cout << "Enter last name :";
    std::cin >> lName;

    std::string newStr;
    newStr.append(fName+' ').append(lName);
    std::cout << newStr << std::endl;

    std::string newStr2;
    newStr2 = fName + ' ' +lName;
    std::cout << newStr2 << std::endl;

    return 0;
}
