#include <iostream>

int main(int argc, const char *argv[]) {
    char char1;

    std::cout << "Enter a character: ";
    std::cin >> char1;

    std::cout << "Integer equivalent of " << char1 << ": ";
    std::cout << static_cast<int>(char1) << std::endl;

    return 0;
}
