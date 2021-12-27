#include <iostream>
#include <exception>
#include "DivideByZeroException.h"

int main()
{
    int num1 = 0;
    int num2 = 0;
    try
    {
        std::cout << "Enter two numbers : ";
        std::cin >> num1 >> num2;
        if(num2 == 0)
        {
            throw DivideByZeroException{};
        }
        int result = num1 / num2 ;
        std::cout << result << std::endl;

    }
    catch(const DivideByZeroException &ex )
    {
        std::cout << ex.what() << std::endl;
        throw DivideByZeroException{};
    }

	return 0;
}
