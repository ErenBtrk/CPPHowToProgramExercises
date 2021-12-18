#include <iostream>

inline int MAX(int a, int b) { return (a > b) ? a : b; }

int main(int argc, const char *argv[]) {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if (num1 == num2) {
        std::cout << "These numbers are equal" << std::endl;
    } else {
        std::cout << MAX(num1, num2) << " is Larger." << std::endl;
    }
    return 0;
}
