#include "Decryption.h"

Decryption::Decryption(const std::string&str)
{
	decrypt(str);
}

void Decryption::decrypt(const std::string& str)
{
	std::string::const_iterator iterator = str.begin();
	while (iterator != str.end())
	{
		int newChar = static_cast<int>(*iterator) - 13;
		if (isdigit(*iterator))
		{
			if (newChar < 48)
			{
				newChar = 58-(48-newChar) ;
			}
		}
		else if (isalpha(*iterator))
		{
			if (isupper(*iterator))
			{
				if (newChar < 65)
				{
					newChar = 91-(65-newChar);
				}
			}
			else if (islower(*iterator))
			{
				if (newChar < 97)
				{
					newChar = 123-(97 - newChar);
				}
			}
		}
		this->decryptedMessage.push_back(static_cast<char>(newChar));
		iterator += 1;
	}
}

void Decryption::printDecryptedMessage()const
{
	std::cout << this->decryptedMessage << std::endl;
}