#include <iostream>
#define MINIMUM2(x,y) std::cout << "Smaller number is : " << ((x<y)? (x) : (y)) << std::endl;

int main()
{
    int x,y;
    std::cout << "Enter two numbers : ";
    std::cin >> x >> y;
    MINIMUM2(x,y);

	return 0;
}
