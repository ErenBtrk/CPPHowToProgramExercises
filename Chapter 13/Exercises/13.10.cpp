#include <iostream>
#include <iomanip>


int main()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        std::cout << std::fixed <<std::setprecision(i) << 100.453627 << std::endl;
    }


    return 0;
}
