#include <iostream>

int main()
{
    const int constValue = 10;
    const int* valueModifiable = &constValue;
    std::cout << (*const_cast<int*>(valueModifiable) += 1) << '\t' << *valueModifiable << '\n';
    std::cout << constValue << std::endl;
    int v = constValue + 1;
    std::cout << v << std::endl;

    return 0;
}
