#pragma once

#include <string>

class MapData
{
public:
	MapData():x(0){}
	void print()const { std::cout << x << std::endl; }

private:
	int x;
};

namespace CountryInformation
{


	enum Countries { POLAND, SWITZERLAND, GERMANY,AUSTRIA, CZECH_REPUBLIC };
	int kilometers;
	std::string string1;
	
	namespace RegionalInformation
	{
		short getPopulation(); // assume definition exists
		MapData map; // assume definition exists

	} // end RegionalInformation
} // end CountryInformation

 namespace Data
 {
	 using namespace CountryInformation::RegionalInformation;
	 void* function(void*, int);
 } // end Data