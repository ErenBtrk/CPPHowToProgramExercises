#include <iostream>

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << ((num1 % num2 == 0) ? " is " : " is not ")
              << "a multiple of " << num2 << std::endl;
    return 0;
}
