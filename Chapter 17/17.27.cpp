#include <iostream>
#include <exception>

int main()
{
    std::cout << "Hello World!\n";

    try
    {
        throw std::invalid_argument("Invalid arguments\n");
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what() << "type: std::invalid_argument" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << "type: std::exception" << std::endl;
    }


    try
    {
        throw std::invalid_argument("Invalid arguments\n");
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << "type: std::exception" << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what() <<  "type: std::invalid_argument" << std::endl;
    }

    return 0;
}
