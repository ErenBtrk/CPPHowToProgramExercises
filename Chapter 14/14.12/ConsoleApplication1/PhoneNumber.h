#pragma once
#include <vector>
#include <iostream>
#include <fstream>

const size_t SIZE = 8;

class PhoneNumber
{
public:
	PhoneNumber(const std::string&);
	void setNumber(const std::string&);
	std::string getNumber()const;
	void generateWords();
	void determineSequence();
	void sortToDesiredSeq();
private:
	

	std::fstream file;
	char numberStr[SIZE];
	std::vector<int> sequenceVec;
	std::vector<std::string> strVec;
	std::vector<std::string> strSeqVec;

	
};

