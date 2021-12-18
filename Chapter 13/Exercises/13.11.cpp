#include <iostream>
#include <iomanip>

int main()
{
    std::string str1;
    std::cout << "Enter a string : " ;
    std::cin >> str1;

    std::cout << std::setw(str1.length()*2) << str1 << std::endl;


    return 0;
}
