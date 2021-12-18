#include <iostream>
#include "hugeInteger.h"

using namespace std;

int main()
{

	std::string num = "-1234";
	std::string num2 = "-222";

	HugeInteger hi;
	hi.input(num);
	hi.output();

	HugeInteger hi2;
	hi2.input(num2);
	hi2.output();

	std::cout << hi2.add(hi).output() << std::endl;
	std::cout << hi2.subtract(hi).output() << std::endl;

	HugeInteger i1("1234");
	HugeInteger i2("1000");

	std::cout << i1.subtract(i2).output() << std::endl;
	std::cout << HugeInteger("1000").subtract(HugeInteger("1234")).output() << std::endl;

	HugeInteger("1234").isEqualTo(HugeInteger("+1234")) ? std::cout << "equal" : std::cout << "!equal";
	std::cout << std::endl;

	HugeInteger h("12");
	std::cout << h.add(h).output();

	HugeInteger h5("-111");
	HugeInteger h6("60");

	h5.multiply(h6);

	std::cout << h5.output();

	HugeInteger h7("16");
	HugeInteger h8("-3");

	try
	{
		std::cout << h7.divide(h8).output();
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}

	HugeInteger h9("-9000");
	HugeInteger h10("-2");
	try
	{
		std::cout << h9.modulus(h10).output();
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}
	return 0;
}



