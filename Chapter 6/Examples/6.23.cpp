#include <iostream>

int number = 7;  // global variable named number

int main(int argc, const char *argv[]) {
    double number = 10.0f;  // local variable named number

    std::cout << "Local double value of number = " << number
              << "\nGlobal int value of number = " << ::number << std::endl;
    return 0;
}
