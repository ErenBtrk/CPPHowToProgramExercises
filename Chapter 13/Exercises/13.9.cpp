#include <iostream>
#include <iomanip>

int main()
{
	for (size_t i = 0; i < 10; ++i)
	{
		std::cout << std::setw(i) << 12345 << '\t' << 1.2345 << std::endl;
	}

	return 0;
}
