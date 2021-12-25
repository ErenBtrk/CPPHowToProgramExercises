#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool palindrome(std::vector <T>&);


int main()
{
    std::vector <int> vec1 ={1,2,3,4};
    std::vector <int> vec2 ={1,2,3,2,1};
    std::vector <char> vec3 = {'a','n','a','s','t','a','s','m','u','m','s','a','t','s','a','n','a'};
    std::vector <char> vec4 = {'a','n','a','s','t','a','s','m','u','m','s','a','t','s','a','n','a','a'};
    std::vector<char> vec5 = {1,2,2,1};
    std::cout << palindrome(vec1) << std::endl;
    std::cout << palindrome(vec2) << std::endl;
    std::cout << palindrome(vec3) << std::endl;
    std::cout << palindrome(vec4) << std::endl;
    std::cout << palindrome(vec5) << std::endl;

	return 0;
}

template<typename T>
bool palindrome(std::vector <T>&vec)
{
    for(size_t i = 0 ; i < vec.size() / 2 ; i++)
    {
        if(vec.at(i) != vec.at(vec.size()-i-1))
        {
            return false;
        }
    }
    return true;
}
