#include <iostream>

int square(int);

int main(int argc, const char *argv[]) {
    int a = 10;  // value to square (local automatic variable in main)

    std::cout << a << " squared: " << square(a) << std::endl;
    return 0;
}
// returns the square of an integer
int square(int x) {  // x is a local variable
    return x * x;
}
