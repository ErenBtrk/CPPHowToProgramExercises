#include <stdlib.h>
#include <iostream>

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << "Difference of " << num1 << " and " << num2 << " = "
              << abs(num1 - num2) << std::endl;
    std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;

    return 0;
}
