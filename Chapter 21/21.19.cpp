#include <iostream>

void eraseBy(std::string& str)
{
    while(str.find("by") != std::string::npos || str.find("BY") != std::string::npos)
    {
        int loc1 = str.find("by");
        if(loc1 != std::string::npos)
        {
            str.erase(loc1,2);
        }
        int loc2 = str.find("BY");
        if(loc2 != std::string::npos)
        {
            str.erase(loc2,2);
        }
    }
}

int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    std::getline(std::cin,str);


    eraseBy(str);
    std::cout << str;




}
