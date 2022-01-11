#include <iostream>
#include <iterator>
#include <algorithm>



int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    std::getline(std::cin,str);

    while(str.begin() != str.end())
    {
        str.erase(str.begin(),str.begin()+1);
        std::cout << str << std::endl;
    }





}
