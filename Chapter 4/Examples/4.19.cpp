#include <iostream>

int main(int argc, const char *argv[]) {
    int c;

    // postincrement
    c = 5;
    std::cout << c << std::endl;
    std::cout << c++ << std::endl;
    std::cout << c << std::endl;

    std::cout << std::endl;

    // preincrement
    c = 5;
    std::cout << c << std::endl;
    std::cout << ++c << std::endl;
    std::cout << c << std::endl;

    return 0;
}
