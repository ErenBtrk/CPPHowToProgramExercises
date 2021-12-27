#include <iostream>

void f1(void)
{
    throw "It's not the fedoral gov's fault\n";
}

void f2(void)
{
    f1();
}

void f3(void)
{
    f2();
}

void f4(void)
{
    f3();
}

int main()
{
    std::cout << "Hello World!\n";

    try
    {
        f4();
    }
    catch (const char* e)
    {
        std::cout << e;
    }

    return 0;
}
