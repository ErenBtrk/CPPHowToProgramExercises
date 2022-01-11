#pragma once
#include <iostream>

class Encryption
{
public:
	explicit Encryption(const std::string&);
	void encrypt(const std::string&);
	void printEncryptedMessage()const;
	std::string getEncryptedMessage()const
	{
		return encryptedMessage;
	}
private:
	std::string encryptedMessage;
};