#include <iostream>
#include <iomanip>

void print(int number)
{
    std::cout << "Hex : " << std::hex << number << std::endl;
    std::cout << "Oct : " << std::oct << number << std::endl;
    std::cout << "Dec : " << std::dec << number << std::endl;

    std::cout << "\n\n";
}

int main()
{
    int number1,number2,number3;
    std::cout << "Enter a number in decimal format : ";
    std::cin >> std::dec >> number1;
    print(number1);

    std::cout << "Enter a number in octal format : ";
    std::cin >> std::oct >> number2;
    print(number2);

    std::cout << "Enter a number in hexadecimal format : ";
    std::cin >> std::hex >> number3;
    print(number3);




    return 0;
}

