#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <iterator>


bool palindromeTester(const std::string &str)
{
    std::string copyStr;
    std::copy_if(str.cbegin(),str.cend(),back_inserter(copyStr),[](char c){return isalpha(c);});
    std::string copyStr2(copyStr);
    std::reverse(copyStr.begin(),copyStr.end());
    if(copyStr2 == copyStr)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    std::string userInput;
    std::cout << "Enter a string : " ;
    std::cin >> userInput;
    if(palindromeTester(userInput))
    {
        std::cout << "It is a palindrome.\n" << userInput;

    }
    else
    {
        std::cout << "It is NOT a palindrome.\n" << userInput;
    }





	return 0;
}
