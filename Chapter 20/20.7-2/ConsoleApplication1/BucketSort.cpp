#include "BucketSort.h"
#include <iostream>
#include <string>
#include <algorithm>

BucketSort::BucketSort(int* ptr, size_t size) :arr(new int[size]), arrSize(size)
{
	setArray1D(ptr);
}

BucketSort::~BucketSort()
{
	delete[]arr;
	std::cout << "Destructor called." << std::endl;
}
void BucketSort::setArray1D(int* ptr)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		arr[i] = ptr[i];
	}
}

size_t BucketSort::getLargestLength()const
{
	size_t largestLength = getNumberOfDigits(arr[0]);
	for (size_t i = 1; i < arrSize; i++)
	{
		if (getNumberOfDigits(arr[i]) > largestLength)
		{
			largestLength = getNumberOfDigits(arr[i]);
		}
	}
	return largestLength;
}

size_t BucketSort::getNumberOfDigits(int num)const
{
	if (num < 0)
	{
		num *= -1;
	}
	size_t counter = 0;
	while (num > 0)
	{
		num = num / 10;
		counter++;
	}
	return counter;
}

size_t BucketSort::getDigitAt(int num,size_t loc)const
{
	//-123
	if (num < 0)
	{
		num = num * -1;
	}
	std::string str = std::to_string(num);
	
	if (loc > str.size() - 1)
	{
		return 0;
	}
	else
	{
		return static_cast<size_t>(str[str.size()-1-loc] - 48);
	}
}

void BucketSort::Distribution(size_t loc)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		if (arr[i] < 0)
		{
			arr2Dnegative.at(getDigitAt(arr[i], loc)).push(arr[i]);
		}
		else
		{
			arr2D.at(getDigitAt(arr[i], loc)).push(arr[i]);
		}
		
	}
}

void BucketSort::gathering()
{
	size_t subscript = 0;
	for (int i = arr2Dnegative.size()-1; i>=0 ; i--)
	{
		while (!arr2Dnegative.at(i).empty())
		{
			int top = arr2Dnegative.at(i).front();
			arr2Dnegative.at(i).pop();
			arr[subscript++] = top;
		}
	}

	for (size_t i = 0; i < arr2D.size(); i++)
	{
		while (!arr2D.at(i).empty())
		{
			int front = arr2D.at(i).front();
			arr2D.at(i).pop();
			arr[subscript++] = front;
		}
	}	

	printArr();
	
}

void BucketSort::printArr()const
{
	for (size_t i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void BucketSort::sort()
{
	for (size_t i = 0; i < getLargestLength(); i++)
	{
		Distribution(i);
		gathering();
	}
}