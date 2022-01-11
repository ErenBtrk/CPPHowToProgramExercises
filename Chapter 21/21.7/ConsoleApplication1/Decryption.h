#pragma once
#include <iostream>

class Decryption
{
public:
	explicit Decryption(const std::string&);
	void decrypt(const std::string&);
	void printDecryptedMessage()const;
	std::string getDecryptedMessage()const
	{
		return decryptedMessage;
	}
private:
	std::string decryptedMessage;
};