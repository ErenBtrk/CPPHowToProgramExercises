#include <iostream>

int main(int argc, const char *argv[]) {
    int count;

    for (count = 1; count <= 10; ++count) {
        if (count == 5) { break; }

        std::cout << count << " ";
    }

    std::cout << "\nBroke out of loop at count = " << count << std::endl;
    return 0;
}
