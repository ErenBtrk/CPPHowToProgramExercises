#include <iostream>
#include <sstream>
#include <cstring>

int main()
{
	std::stringstream inputStream("This is a segment%What?");

	char *pChar = new char[inputStream.str().size() + 20];
	memset(pChar, '!', inputStream.str().size() + 20);
	inputStream.getline(pChar, 100, '%');

	std::cout << static_cast<int>(pChar[std::string("This is a segment").size()]) << std::endl;

	memset(pChar, '!', inputStream.str().size() + 20);
	inputStream.getline(pChar, 100);
	std::cout << pChar << '\n';

	delete[] pChar;

	std::stringstream inputStream2("This is a segment%What?");
	char *pChar2 = new char[inputStream2.str().size() + 20];
	memset(pChar2, '!', inputStream2.str().size() + 20);
	inputStream2.get(pChar2, 100, '%');

	std::cout << static_cast<int>(pChar2[std::string("This is a segment").size()]) << std::endl;

	memset(pChar2, '!', inputStream2.str().size() + 20);
	inputStream2.getline(pChar2, 100);
	std::cout << pChar2 << '\n';


	delete[] pChar2;


	return 0;
}
