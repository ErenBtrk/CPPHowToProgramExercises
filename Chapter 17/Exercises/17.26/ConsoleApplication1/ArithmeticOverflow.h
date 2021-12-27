#pragma once
#include <stdexcept>

class ArithmeticOverflow : public std::runtime_error
{
public:
	ArithmeticOverflow() :std::runtime_error("Arithmetic overflow error."){}
};