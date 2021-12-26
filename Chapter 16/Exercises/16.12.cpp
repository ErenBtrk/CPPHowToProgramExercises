#include <iostream>
#include <algorithm>
bool palindromeTester(std::string &str)
{
    std::string copyStr(str);
    std::reverse(copyStr.begin(),copyStr.end());
    return std::equal(copyStr.cbegin(),copyStr.cend(),str.cbegin(),str.cend());
}

int main()
{
    std::string userInput;
    std::cout << "Enter a string : " ;
    std::cin >> userInput;
    if(palindromeTester(userInput))
    {
        std::cout << "It is a palindrome." ;
    }
    else
    {
        std::cout << "It is not a palindrome.";
    }


	return 0;
}
