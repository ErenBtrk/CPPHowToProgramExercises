#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    double principal = 1000.0f;
    double rate = .05f;

    std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    for (int year = 0; year <= 10; ++year) {
        double amount = principal * pow(1.0f+ rate, year);

        std::cout << std::setw(4) << year << std::setw(21) << amount
                  << std::endl;
    }
    return 0;
}
