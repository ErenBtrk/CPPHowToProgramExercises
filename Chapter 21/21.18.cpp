#include <iostream>

void insertToString(std::string& str)
{
    std::string strToAppend = "******";
    str.insert(str.size()/2,strToAppend,0,std::string::npos);
}

int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    std::getline(std::cin,str);

    insertToString(str);
    std::cout << str ;





}
