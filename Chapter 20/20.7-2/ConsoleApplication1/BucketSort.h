#pragma once
#include <queue>
#include <stack>
#include <array>
#include <list>

class BucketSort
{
public:
	const static size_t ROW_SIZE = 10;
	BucketSort(int*,size_t);
	~BucketSort();
	
	void sort();
	void printArr()const;
private:
	void setArray1D(int*);
	size_t getNumberOfDigits(int)const;
	size_t getDigitAt(int, size_t)const;
	size_t getLargestLength()const;

	void Distribution(size_t);
	void gathering();

	int* arr = nullptr;
	size_t arrSize;
	std::array<std::queue<int>, ROW_SIZE> arr2D;
	std::array<std::queue<int>, ROW_SIZE> arr2Dnegative;
};