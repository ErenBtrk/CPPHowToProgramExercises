#include <iostream>
#include <string>
#include <array>


void countVowels(const std::string& str)
{
    int counter = 0;
    std::string vowels = "aeiou";
    std::array<int,5> vowelFrequencies = {0};
    for(size_t i = 0 ; i < str.size() ; i++)
    {
        size_t location = vowels.find(str.at(i));
        if( location != std::string::npos)
        {
            ++counter;
            ++vowelFrequencies.at(location);
        }
    }

    std::cout << "Count of vowels : " << counter << std::endl;
    for(size_t i = 0 ; i < vowels.size() ; i++)
    {
        std::cout << vowels.at(i) << " : " ;
        for(size_t j = 0 ; j < vowelFrequencies.at(i) ; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n\n";

    }
}

int main()
{
    std::array<int,5> vowelFrequencies = {0};
    std::string str;
    std::cout << "Enter a sentence : " ;
    std::getline(std::cin,str);
    std::cin.clear();

    countVowels(str);







}
