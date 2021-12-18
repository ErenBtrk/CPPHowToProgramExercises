#include <iomanip>
#include <iostream>

unsigned long factorial(unsigned long);

int main(int argc, const char *argv[]) {
    // calculate factorials of 0 through 10
    for (int counter = 0; counter <= 10; ++counter) {
        std::cout << std::setw(2) << counter << "! = " << factorial(counter)
                  << std::endl << std::endl;
    }
    return 0;
}
// recursive definition of function factorial
unsigned long factorial(unsigned long number) {
    // base case
    if (number <= 1) {
        return 1;
    } else {
        std::cout << std::setw(number) << number << std::endl;
        return number * factorial(number - 1);
    }
}
