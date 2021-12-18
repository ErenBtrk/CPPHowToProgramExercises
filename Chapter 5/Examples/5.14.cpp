#include <iostream>

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    for (int count = 1;  count <= 10; ++count) {
        if (count == 5) {
            continue;
        }

        std::cout << count << ' ';
    }

    std::cout << "\nUsed continue to skip printing 5" << std::endl;

    return 0;
}  // end method main
