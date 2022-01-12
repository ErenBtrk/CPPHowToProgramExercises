#include <iostream>

int main()
{
    char c = '\0';
    std::cout << "Please input a character:\n";

    while (std::cin >> c)
    {
        std::cout << c << " is " << (isalnum(c) ? "" : "not ") << "an alphabet or a number\n";
        std::cout << c << " is " << (isalpha(c) ? "" : "not ") << "an alpha\n";
        std::cout << c << " is " << (iscntrl(c) ? "" : "not ") << "a control character\n";
        std::cout << c << " is " << (isdigit(c) ? "" : "not ") << "a digit\n";
        std::cout << c << " is " << (isgraph(c) ? "" : "not ") << "a graph character\n";
        std::cout << c << " is " << (islower(c) ? "" : "not ") << "a lower character\n";
        std::cout << c << " is " << (isprint(c) ? "" : "not ") << "printable\n";
        std::cout << c << " is " << (ispunct(c) ? "" : "not ") << "a punctuation mark\n";
        std::cout << c << " is " << (isspace(c) ? "" : "not ") << "a space character\n";
        std::cout << c << " is " << (isupper(c) ? "" : "not ") << "an upper character\n";
        std::cout << c << " is " << (isxdigit(c) ? "" : "not ") << "an hex digit character\n";
        std::cout << c << " is " << (isblank(c) ? "" : "not ") << "blank\n";
        std::cout << c << " toupper is " << static_cast<char>(toupper(c)) << std::endl;
        std::cout << c << " tolower is " << static_cast<char>(tolower(c)) << std::endl;

        std::cout << "Please input a character:\n";
    }


	return 0;
}
