#include <iostream>
#include <string>

int main()
{
	std::string Str;

	std::cout << "Input suzy: ";
	std::cin >> Str;
	std::cout << Str << '\n';

	std::cout << "Input \"suzy\": ";
	std::cin >> Str;
	std::cout << Str << '\n';

	std::cout << "Input \'suzy\': ";
	std::cin >> Str;
	std::cout << Str << '\n';

	std::cout << std::string::npos << std::endl;

	return 0;
}
