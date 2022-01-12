#include <iostream>
using namespace std;

void printBits(int num)
{
    const unsigned SHIFT = 8 * sizeof(unsigned)-1;
    const unsigned MASK =static_cast<const unsigned> (1 << SHIFT);

    for(unsigned i = 1 ; i <= SHIFT +1; i++)
    {
        cout << (num & MASK ? '1' : '0');
        num <<= 1;
        if(i % 8 == 0)
        {
            cout << ' ';
        }
    }
    cout << "\n";
}

// function to reverse bits of a number
void reverseBits(unsigned int& n)
{
    unsigned int rev = 0;

    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift
        // 'rev' by 1
        rev <<= 1;

        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;

        // bitwise right shift
        // 'n' by 1
        n >>= 1;

    }
    n = rev;


}

// Driver program to test above
int main()
{
    unsigned int n = 16;
    cout << "Before reversing : " << n << endl;
    reverseBits(n);
    cout << "After reversing : " << n << endl;

    return 0;
}
