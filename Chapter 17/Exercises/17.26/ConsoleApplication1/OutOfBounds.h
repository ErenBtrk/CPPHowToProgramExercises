#pragma once
#include <stdexcept>

class OutOfBounds : public std::runtime_error
{
public:
	OutOfBounds():std::runtime_error("Subscript out of bounds error."){}
};