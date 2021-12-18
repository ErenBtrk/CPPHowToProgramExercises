#include <iomanip>
#include <iostream>

unsigned long factorial(unsigned long);

int main(int argc, const char *argv[]) {
    for (int counter = 0; counter <= 10; ++counter) {
        std::cout << std::setw(2) << counter << "! = " << factorial(counter)
                  << std::endl;
    }

    return 0;
}
// iterative function factorial
unsigned long factorial(unsigned long number) {
    unsigned long result = 1;

    // iterative factorial calculation
    for (unsigned long i = number; i >= 1; --i) {
        result *= i;
    }

    return result;
}
