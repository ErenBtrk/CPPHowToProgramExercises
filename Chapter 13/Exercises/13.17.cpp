#include <iostream>
#include <iomanip>


int main()
{
    std::cout << std::setw(12) << std::left << "Decimal"
              << std::setw(12) << std::left << "Hexadecimal"
              << std::setw(12) << std::left << "Octal"
              << std::setw(12) << std::left << "Character" << std::endl;
    for(int i = 33 ; i <= 126 ; i++)
    {
        std::cout << std::setw(12) << std::left << std::dec << i
                  << std::setw(12) << std::left << std::hex << i
                  << std::setw(12) << std::left << std::oct << i
                  << std::setw(12) << std::left << std::dec << static_cast<char>(i) << std::endl;
    }


    return 0;
}
