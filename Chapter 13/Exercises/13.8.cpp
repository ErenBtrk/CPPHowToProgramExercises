#include <iostream>

int main()
{
	char c = 'c';
	char *p = &c;

	std::cout << (int)p << '\n';
	std::cout << (long)p << '\n';
	std::cout << (unsigned)p << '\n';
	std::cout << (long long)p << '\n';
	std::cout << (short)p << '\n';
	std::cout << (unsigned long)p << '\n';
	std::cout << (char)p << '\n';
	std::cout << (unsigned long long)p << '\n';
	std::cout << static_cast<void *>(p) << '\n';

	return 0;
}
