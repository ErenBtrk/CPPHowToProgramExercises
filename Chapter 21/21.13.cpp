#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <locale>
#include <iterator>

bool compareAnimalNames(const std::string& name1, const std::string& name2)
{
	std::string Upper1;
	std::string Upper2;

	std::locale loc;

	for (auto v : name1)
	{
		if (std::isupper(v, loc))
		{
			Upper1 += v;
		}
	}

	for (auto v : name2)
	{
		if (std::isupper(v, loc))
		{
			Upper2 += v;
		}
	}

	return Upper1 < Upper2;
}

int main()
{
	std::vector<std::string> animalNames = {"Cat", "Dog", "Tiger", "Eagle", "Hauk", "Lion", "Rabbit"};

	std::sort(animalNames.begin(), animalNames.end(), compareAnimalNames);

	std::ostream_iterator<std::string> out(std::cout, " ");

	std::copy(animalNames.begin(), animalNames.end(), out);

	return 0;
}
