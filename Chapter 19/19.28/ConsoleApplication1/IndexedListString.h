#pragma once
#include "IndexedList.h"


class IndexedListString:public IndexedList<std::string>
{
public:
	IndexedListString() :IndexedList<std::string>(26) {}
private:
	virtual size_t getIndex(const std::string& str)override
	{
		return static_cast<size_t>(std::toupper(str.at(0))) - 65;
	}
};