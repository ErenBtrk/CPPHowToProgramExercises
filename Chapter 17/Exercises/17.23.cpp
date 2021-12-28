#include <iostream>
#include <iterator>

int main()
{
    try
    {
        int input;
        std::cout << "Enter a number : ";
        std::cin >> input;
        throw (input > 5 ? 5 : 5.55);
    }
    catch(const int &x)
    {
        std::cout << "Catch block with int." << x ;
    }
    catch(const double &x)
    {
        std::cout << "Catch block with double." << x ;
    }

}
