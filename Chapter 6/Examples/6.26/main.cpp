#include <iostream>

#include "maximum.h"

int main(int argc, const char *argv[]) {
    // demonstrate maximum with int values
    int int1, int2, int3;

    std::cout << "Input three integer values: ";
    std::cin >> int1 >> int2 >> int3;

    std::cout << "The maximum integer value is: " << maximum(int1, int2, int3)
              << std::endl;

    // demonstrate maximum with double values
    double double1, double2, double3;

    std::cout << "\nInput three double values: ";
    std::cin >> double1 >> double2 >> double3;

    std::cout << "The maximum double value is: "
              << maximum(double1, double2, double3) << std::endl;

    // demonstrate maximum with char values
    char char1, char2, char3;

    std::cout << "\nInput three characters: ";
    std::cin >> char1 >> char2 >> char3;

    std::cout << "The maximum character value is: "
              << maximum(char1, char2, char3) << std::endl;
    return 0;
}
