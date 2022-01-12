#include <iostream>

#define PRINT_STRING(x) std::cout << #x << std::endl;

int main()
{
    std::string str = "Hi.I am Batman.";
    PRINT_STRING("HELLO WORLD.");
    PRINT_STRING(str);


	return 0;
}
