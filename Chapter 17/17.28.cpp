#include <iostream>
#include <stdexcept>

class Number
{
public:
    Number(int x)
    {
        try
        {
           if(x > 10)
           {
               throw std::invalid_argument("Invalid argument");

           }
           else
           {
               std::cout << "No exception." << std::endl;
                this->x = x;

           }
        }
        catch(const std::invalid_argument&e)
        {
            std::cout << e.what() << std::endl;

        }
    }
    ~Number()
    {
        std::cout << "Destructor for number : " << x << std::endl;
    }

    void showNumber(){ std::cout << x << std::endl; }
private:
    int x;
};

int main()
{
    Number n1(11);
    n1.showNumber();
    Number n2(10);
    n2.showNumber();



	return 0;
}
