#include "Str.h"
#include <cstring>

Str::Str(const char*ptr)
{
	setPtr(ptr);
}

void Str::setPtr(const char*ptr)
{
	size = strlen(ptr);
	this->ptr = new char[size+1];
	strcpy_s(this->ptr,size+1,ptr );
}

void Str::print()const
{
	std::cout << ptr << std::endl;
}

char* Str::getPtr()const
{
	return ptr;
}

