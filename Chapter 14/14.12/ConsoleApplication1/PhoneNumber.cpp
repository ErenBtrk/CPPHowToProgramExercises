#include "PhoneNumber.h"
#include <string>
#include <algorithm>

PhoneNumber::PhoneNumber(const std::string&num):
	strVec({"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"})
{
	setNumber(num);
	determineSequence();
	sortToDesiredSeq();
}

void PhoneNumber::setNumber(const std::string&num)
{
	num.copy(numberStr, 7);
	numberStr[SIZE - 1] = '\0';
}

std::string PhoneNumber::getNumber()const
{
	return numberStr;
}

void PhoneNumber::determineSequence()
{
	for (size_t i = 0; i < 7; i++)
	{
		switch (static_cast<int>(numberStr[i]))
		{
		case 50://2
			sequenceVec.push_back(0);
			break;
		case 51://3
			sequenceVec.push_back(1);
			break;
		case 52://4
			sequenceVec.push_back(2);
			break;
		case 53://5
			sequenceVec.push_back(3);
			break;
		case 54://6
			sequenceVec.push_back(4);
			break;
		case 55://7
			sequenceVec.push_back(5);
			break;
		case 56://8
			sequenceVec.push_back(6);
			break;
		case 57://9
			sequenceVec.push_back(7);
			break;
		}
	}
	
}


void PhoneNumber::sortToDesiredSeq()
{
	for (size_t i = 0; i < sequenceVec.size(); i++)
	{
		strSeqVec.push_back(strVec[sequenceVec[i]]);
	}
}

void PhoneNumber::generateWords()
{
	int count = 0;

	file.open("words.txt", std::ios::out);
	if (!file)
	{
		std::cerr << "File couldnt be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		for (size_t i = 0; i < strSeqVec[0].size(); i++)
		{

			for (size_t j = 0; j < strSeqVec[1].size(); j++)
			{

				for (size_t k = 0; k < strSeqVec[2].size(); k++)
				{

					for (size_t l = 0; l < strSeqVec[3].size(); l++)
					{

						for (size_t m = 0; m < strSeqVec[4].size(); m++)
						{

							for (size_t n = 0; n < strSeqVec[5].size(); n++)
							{

								for (size_t o = 0; o < strSeqVec[6].size(); o++)
								{
									file << strSeqVec[0].at(i) << strSeqVec[1].at(j) << strSeqVec[2].at(k) << strSeqVec[3].at(l) << strSeqVec[4].at(m) << strSeqVec[5].at(n) << strSeqVec[6].at(o) << std::endl;
									count++;
								}
							}
						}
					}
				}
			}
		}
	}

	
	file <<"Word count : "<< count << std::endl;
	file.close();
}