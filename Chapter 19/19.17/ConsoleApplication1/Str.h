#pragma once
#include <iostream>

class Str
{
public:
	Str(const char*);
	void setPtr(const char*);
	char* getPtr()const;

	void print()const;
private:
	char* ptr;
	size_t size;
};