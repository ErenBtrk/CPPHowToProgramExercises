#include "Encryption.h"
#include <string>

Encryption::Encryption(const std::string& str)
{
	encrypt(str);
}

void Encryption::encrypt(const std::string& str)
{
	std::string::const_iterator iterator = str.begin();
	while (iterator != str.end())
	{
		int newChar = static_cast<int>(*iterator) + 13;
		if (isdigit(*iterator))
		{
			if (newChar > 57)
			{
				newChar = (newChar - 57) + 47;
			}
		}
		else if (isalpha(*iterator))
		{
			if (isupper(*iterator))
			{
				if (newChar > 90)
				{
					newChar = (newChar - 90) + 64;
				}
			}
			else if (islower(*iterator))
			{
				if (newChar > 122)
				{
					newChar = (newChar - 122) + 96;
				}
			}
		}
		this->encryptedMessage.push_back(static_cast<char>(newChar));
		iterator += 1;
	}
}

void Encryption::printEncryptedMessage()const
{
	std::cout << this->encryptedMessage << std::endl;
}