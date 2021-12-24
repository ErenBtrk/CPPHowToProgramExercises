#include <iostream>
#include <iomanip>


int main()
{
    for(int i = 0 ; i < 20 ; i++)
    {
        std::cout << std::setw(i) <<12345 << std::endl;
        std::cout << std::setw(i) << 1.2345 << std::endl;
    }


    return 0;
}
