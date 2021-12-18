#include <iostream>

const double PI = 3.14159;

int main(int argc, const char *argv[]) {
    int radius;

    std::cout << "Enter an integer value circle radius: ";
    std::cin >> radius;

    std::cout << "Diameter: " << 2 * radius << std::endl;
    std::cout << "Circumference: " << PI * (2 * radius) << std::endl;
    std::cout << "Area: " << PI * (radius * radius) << std::endl;

    return 0;
}
