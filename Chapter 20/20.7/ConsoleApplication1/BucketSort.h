#pragma once
#include <iostream>

class BucketSort
{
public:
	const static size_t rowSize;
	BucketSort(int*, size_t);
	~BucketSort();
	void setArray(int*,size_t);
	void set2dArray();
	void sort(int*);
	int getDigitAt(int, size_t)const;
	void to2dArray(size_t);
	void setLargestLength();
	size_t getDigitAmount(int)const;
private:
	size_t largestLength;
	int* arr = nullptr;
	int** arr2d = nullptr;
	size_t arrSize;
};