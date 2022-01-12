#include <iostream>

void printBits(int num)
{
    const unsigned SHIFT = 8 * sizeof(unsigned)-1;
    const unsigned MASK =static_cast<const unsigned> (1 << SHIFT);

    for(unsigned i = 1 ; i <= SHIFT +1; i++)
    {
        std::cout << (num & MASK ? '1' : '0');
        num <<= 1;
        if(i % 8 == 0)
        {
            std::cout << ' ';
        }
    }
    std::cout << "\n";
}

int power2(int num,int pow)
{
    return (num << pow);

}

int main()
{
    int num;
    int pow;
    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << "Enter power : ";
    std::cin >> pow;

    printBits(num);
    printBits(power2(num,pow));


    return 0;
}
