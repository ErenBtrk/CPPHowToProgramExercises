#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

bool isPalindrome(const std::string& str)
{
    std::string tempStr;
    tempStr = str;
    std::reverse(tempStr.begin(),tempStr.end());
    return tempStr == str;
}

int countNumberOfPalindromes(const std::string& str)
{
    int counter = 0;
    std::stringstream ss(str);
    std::string tokenized;
    while(std::getline(ss,tokenized,' '))
    {
        if(isPalindrome(tokenized))
        {
            counter++;
        }
    }
    return counter;
}



int main()
{
    std::string str;
    std::cout << "Enter a sentence : " ;
    std::getline(std::cin,str);
    std::cin.clear();

    std::cout << "Number of palindromes : " << countNumberOfPalindromes(str);






}
