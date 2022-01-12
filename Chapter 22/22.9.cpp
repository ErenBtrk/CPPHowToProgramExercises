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

void packCharacters(char chars[],size_t arrSize,unsigned int& v)
{
    v = static_cast<unsigned int>(chars[0]);
    for(size_t i = 1 ; i < arrSize ; i++)
    {
        v <<= 8;
        v |= (static_cast<unsigned int>(chars[i]));
    }
}

char* unpackCharacters(unsigned int&v)
{
    static char arr[4];
    size_t subscript = 0;
    for(int i = 3 ; i >= 0 ;i--)
    {
        unsigned SHIFT = 8* i;
        unsigned MASK = static_cast<unsigned> (255 << SHIFT);
        unsigned c = (v & MASK) >> SHIFT;
        arr[subscript++] = c;

    }
    return arr;

}

int main()
{
    unsigned int v = 0;
    char chars[4];
    std::cout << "Enter four characters : ";
    for(size_t i = 0 ; i < 4 ; i++)
    {
        std::cin >> chars[i];
    }
    for(size_t i = 0 ; i<4;i++)
    {
        printBits(chars[i]);
    }
    packCharacters(chars,4,v);
    std::cout << "Packed :\n";
    printBits(v);
    std::cout << "Unpacked :\n";
    char*ptr = unpackCharacters(v);
    for(size_t i = 0 ; i < 4 ; i++)
    {
        std::cout << ptr[i];
    }


	return 0;
}
