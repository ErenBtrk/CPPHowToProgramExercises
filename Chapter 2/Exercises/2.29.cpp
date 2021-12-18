#include <iostream>

int main(int argc, const char *argv[]) {
    std::cout << "integer square  cube" << std::endl;

    for (int i = 0; i <= 10; ++i) {
        std::cout << i << "\t" << (i * i) << "\t" << (i * i * i) << std::endl;
    }

    return 0;
}
