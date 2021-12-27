#include <iostream>
#include <iterator>

int main()
{
    try
    {
        int input;
        std::cout << "Enter a number : ";
        std::cin >> input;
        if(input > 5)
        {
            throw 5;
        }
        else
        {
            throw 5.5;
        }
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
