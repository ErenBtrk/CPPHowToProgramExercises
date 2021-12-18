#include <iostream>
#include <string>

void printDigits(int);

int main(int argc, const char *argv[]) {
    int num;

    std::cout << "Enter a five digit integer: ";
    std::cin >> num;

    printDigits(num);

    std::cout << std::endl;

    return 0;
}

/**
 * Seperates and prints digits in the correct order.
 * Prints in correct order using stack unwinding.
 * @param num.
 */
void printDigits(int num) {
    const std::string SPACES = "   ";
    if (num / 10 > 0) {
        printDigits(num / 10);
    }

    std::cout << num % 10 << SPACES;
}
