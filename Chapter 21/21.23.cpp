#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>



int main()
{
    std::string str = "abcdefghijklmnopqrstuvwxyz";
    std::string temp;
    for(size_t i = 0 ; i < str.size()/2 +1 ; i ++)
    {
        for(size_t space = str.size()/2 -i ; space > 0 ; space--)
        {
            std::cout << " ";
        }
        for(size_t j = i ; j < i*2+1 ; j++ )
        {
            std::cout << str[j] ;
            temp += str[j];
        }
        std:reverse(temp.begin(),temp.end());
        for(size_t k = 1 ; k < temp.size() ; k++)
        {
            std::cout << temp[k] ;
        }
        temp.erase(0,std::string::npos);
        for(size_t space = str.size()/2 -i ; space > 0 ; space--)
        {
            std::cout << " ";
        }
        std::cout << "\n";
    }






}
