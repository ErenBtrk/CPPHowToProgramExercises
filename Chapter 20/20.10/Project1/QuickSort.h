#pragma once
#include <array>
#include <iostream>

template<typename T,const size_t arrSize>
class QuickSort
{
public:
	QuickSort(std::array<T, arrSize>& arr):arr(new int[arrSize])
	{
		setArray(arr);
	}

	~QuickSort()
	{
		std::cout << "Destructor invoked." << std::endl;
		delete []arr;
	}
	void setArray(std::array<T,arrSize>& arr)
	{
		for (size_t i = 0; i < arrSize; i++)
		{
			this->arr[i] = arr[i];
		}
	}

	void printArray()const
	{
		for (size_t i = 0; i < arrSize; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << "\n\n";
	}

	bool isGreater(T x, T y)const
	{
		return x > y;
	}

	bool isLess(T x, T y)const
	{
		return x < y;
	}

	void swap(T &x,T &y)
	{
		T temp = x;
		x = y;
		y = temp;
	}

	size_t partitioning(size_t leftmost,size_t rightmost)
	{
		int pivotNumber = arr[leftmost];
		size_t pivotNumberIndex = leftmost;
		size_t rightmostIndex = rightmost;
		size_t leftmostIndex = leftmost;
		bool left = true;
		bool right = true;
		while (true)
		{
			size_t partitionDone = false;
			std::cout << "pni :" << pivotNumberIndex << "\n";
			std::cout << "lmi :" << leftmostIndex << "\n";
			std::cout << "rmi :" << rightmostIndex << "\n";
			
			while (!isLess(arr[rightmostIndex], arr[pivotNumberIndex]) && rightmostIndex != pivotNumberIndex)
			{
				rightmostIndex--;
				right = false;
			}
			if (isLess(arr[rightmostIndex], arr[pivotNumberIndex]))
			{
				swap(arr[rightmostIndex], arr[pivotNumberIndex]);
				leftmostIndex = pivotNumberIndex + 1;
				pivotNumberIndex = rightmostIndex;	
			}
			else
			{
				right = true;
			}
			while (!isGreater(arr[leftmostIndex], arr[pivotNumberIndex]) && leftmostIndex != pivotNumberIndex)
			{
				leftmostIndex++;
				left = false;
			}
			if (isGreater(arr[leftmostIndex], arr[pivotNumberIndex]))
			{
				swap(arr[leftmostIndex], arr[pivotNumberIndex]);
				rightmostIndex = pivotNumberIndex-1;
				pivotNumberIndex = leftmostIndex;
				
			}
			else
			{
				left = true;
			}
			if (left && right)
			{
				return pivotNumberIndex;
			}
			
			
		}
	}

	void quickSort(size_t startIndex = 0,size_t endIndex = arrSize-1)
	{
		if (endIndex > startIndex)
		{
			size_t last = partitioning(startIndex, endIndex);
			quickSort(startIndex, last > 0 ? last-1 : 0);
			quickSort(last+1, endIndex);
		}
		
	}
private:
	int* arr;

};