#include <iostream>
#include <fstream>


int main()
{
    std::fstream file("size.dat",std::ios::out);
    if(!file)
    {
        std::cerr << "Cannot open the file" << std::endl;
    }
    else
    {
        file << "sizeof(int) = " << sizeof(int) << std::endl;
        file << "sizeof(double) = " << sizeof(double) << std::endl;
        file << "sizeof(float) = " << sizeof(float) << std::endl;
        file << "sizeof(char) = " << sizeof(char) << std::endl;

    }





    return 0;
}
