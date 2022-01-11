#include <iostream>
#include <iterator>
#include <algorithm>

template<typename Iterator>
void printBackwardRecursive(const Iterator r1,const Iterator r2)
{
    if(r1 == r2)
    {
        return;
    }
    std::cout << *r1;
    printBackwardRecursive(r1+1,r2);
}

int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    std::getline(std::cin,str);

    printBackwardRecursive(str.crbegin(),str.crend());





}
