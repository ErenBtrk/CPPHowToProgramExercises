#include <iostream>

void eatTooMuch(void)
{
    try
    {
        throw "This function eats too much\n";
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "catched invalid_argument exceptions\n";
    }
}

int main()
{
    std::cout << "Hello World!\n";

    try
    {
        eatTooMuch();
    }
    catch (const char* e)
    {
        std::cout << e;
    }

    return 0;
}
