#include <iostream>
#include <iomanip>

int main()
{   std::cout  << std::setw(10)<< std::right << "Fahrenheit" << std::setw(10) << std::right << "Celcius" << std::endl;
    for(int fahr = 0 ; fahr <= 212 ; fahr++)
    {
        double celcius =   5.0/9.0*(fahr-32);
        std::cout << std::setprecision(3) << std::showpos << std::setw(10)
        << std::right << fahr << std::setw(10) << std::right << celcius << std::endl;

    }


    return 0;
}
