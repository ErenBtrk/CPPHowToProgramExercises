#include "BucketSort.h"
#include <string>

const size_t BucketSort::rowSize = 10;

BucketSort::BucketSort(int *arr,size_t size):arrSize(size)
{
	setArray(arr, size);
	setLargestLength();
}

BucketSort::~BucketSort()
{

}

void BucketSort::setLargestLength()
{
	largestLength = getDigitAmount(arr[0]);
	for (size_t i = 1; i < arrSize; i++)
	{
		if (getDigitAmount(arr[i]) > largestLength)
		{
			largestLength = getDigitAmount(arr[i]);
		}
	}
}

void BucketSort::setArray(int* arr, size_t size)
{
	this->arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		this->arr[i] = arr[i];
	}
}

void BucketSort::set2dArray()
{
	this->arr2d = new int*[rowSize];
	for (size_t i = 0; i < rowSize; i++)
	{
		this->arr2d[i] = new int[arrSize];
	}

	for (size_t i = 0; i < rowSize; i++)
	{
		for (size_t j = 0; j < arrSize; j++)
		{
			this->arr2d[i][j] = 0;
		}
	}

}

int BucketSort::getDigitAt(int num,size_t loc)const
{
	std::string str = std::to_string(num);
	if (loc > str.size() - 1 )
	{
		return 0;
	}
	else
	{
		return static_cast<int>(str[loc] - 48);
	}
}

void BucketSort::to2dArray(size_t loc)
{
	size_t column = 0; 
	for (size_t i = 0; i < arrSize; i++)
	{
		arr2d[getDigitAt(arr[i], loc)][0] = arr[i];
	}
}

size_t BucketSort::getDigitAmount(int num)const
{
	size_t counter = 0;
	while (num > 0)
	{
		num = num / 10;
		counter++;
	}
	return counter;
}