#include <iostream>

void printBits(int num)
{
    const unsigned SHIFT = 8*sizeof(unsigned)-1;
    const unsigned MASK = static_cast<const unsigned>(1<<SHIFT);

    for(unsigned i = 1 ; i <= SHIFT +1; i++)
    {
        std::cout << (num & MASK ? '1' : '0' );
        num <<= 1;
        if(i % 8 == 0)
        {
            std::cout << ' ';
        }
    }
    std::cout << "\n";
}

int main()
{
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    printBits(num);
    printBits(num >> 4);




}
