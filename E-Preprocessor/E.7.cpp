#include <iostream>
#define MINIMUM3(x,y,z) std::cout << "Smallest number is ";\
                        if(x<y && x<z)\
                            std::cout<< x << '\n';\
                        else if(y<x && y<z)\
                            std::cout << y << '\n';\
                        else\
                            std::cout << z << '\n';
int main()
{
    int num1,num2,num3;
    std::cout << "Enter three numbers : ";
    std::cin >> num1 >> num2 >> num3;
    MINIMUM3(num1,num2,num3);

	return 0;
}
