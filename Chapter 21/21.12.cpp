#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str;
    std::cout << "Please enter a word:" ;
    std::getline(std::cin,str);

    std::string::const_reverse_iterator cIterator = str.crbegin();
    while(cIterator != str.crend())
    {
        if(isalpha(*cIterator))
        {
            if(isupper(*cIterator))
            {
                std::cout << static_cast<char>(tolower(*cIterator));
            }
            else if(islower(*cIterator))
            {
                std::cout << static_cast<char>(toupper(*cIterator));
            }
        }
        else
        {
            std::cout << *cIterator;
        }
        cIterator++;
    }





    return 0;
}
