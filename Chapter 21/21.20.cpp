#include <iostream>
#include <iterator>
#include <algorithm>

void printBackward(const std::string& str)
{
    std::reverse_iterator rIterator(str.crbegin());
    while( rIterator != str.crend())
    {
        std::cout << *rIterator;
        rIterator++;
    }
}

int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    std::getline(std::cin,str);

    printBackward(str);





}
