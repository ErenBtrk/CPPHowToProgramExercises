#include <iostream>
#include <cctype>

int main()
{
    char arr[100];
    std::cin.getline(arr,99);
    arr[99] = '\0';
    for(size_t i = 0 ; arr[i] != '\0' ; i++)
    {
        std::cout << static_cast<char>(toupper(arr[i]));
    }
    std::cout << "\n";
    for(size_t i = 0 ; arr[i] != '\0' ; i++)
    {
        std::cout << static_cast<char>(tolower(arr[i]));
    }


	return 0;
}
