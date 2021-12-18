#include <iostream>

int main(int argc, const char* argv[]) {
    int x = 3;
    int& y = x;

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    y = 7;  // modifies x

    std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

    return 0;
}
