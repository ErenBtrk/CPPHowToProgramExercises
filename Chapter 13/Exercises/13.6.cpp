#include <iostream>
#include <iomanip>

int main()
{
    const size_t SIZE = 50;
    //a
    std::cout << std::left << std::setw(15) << 40000 << std::endl;

    //b
    char state[SIZE];
    std::cin.read(state,10);
    std::cout.write(state,10) << std::endl;

    //c
    std::cout << std::showpos << 200 << " " << std::noshowpos << 200 << std::endl;
    //d
    std::cout << std::hex << std::showbase << 100 << std::endl;
    //e
    char charArray[SIZE];
    std::cin.sync();
    std::cin.getline(charArray,10,'p');
    std::cout.write(charArray,10)<<std::endl;

    //f
    std::cout << std::setw(9) << std::right << std::setfill('0') << 1.234 << std::endl;
    return 0;
}
