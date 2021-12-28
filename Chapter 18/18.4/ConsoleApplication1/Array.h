#pragma once
#include <iostream>




template<typename T>
class Array
{
	
public:

	Array(size_t arrSize) :size(static_cast<size_t>(arrSize)), ptr(new T[size]){}

	Array(const Array<T>& arr) :size(arr.size()), ptr(new T[size])
	{
		for (size_t i = 0; i < arr.size(); i++)
		{
			ptr[i] = arr.ptr[i];
		}
	}

	~Array()
	{
		delete[]ptr;
	}

	size_t getSize()const
	{
		return size;
	}

	const Array<T>& operator=(const Array<T>& arr)
	{
		if (*this != arr)
		{
			if (this->size != arr.size)
			{
				delete[]ptr;
				this->size = arr.size;
				this->ptr = new T[size];
			}
			for (size_t i = 0; i < this->size; i++)
			{
				this->ptr[i] = arr.ptr[i];
			}
		}

		return *this;
	}

	bool operator==(const Array<T>& arr)const
	{
		if (this->size != arr.size)
		{
			return false;
		}
		else
		{
			for (size_t i = 0; i < this->size; i++)
			{
				if (this->ptr[i] != arr.ptr[i])
				{
					return false;
				}
			}
			return true;
		}
	}

	bool operator!=(const Array<T>& right)const
	{
		return !(*this == right);
	}

	T& operator[](int subscript)
	{
		if (subscript<0 || subscript > this->size)
		{
			throw std::out_of_range("Subscript out of range.");
		}
		return ptr[subscript];
	}

	T operator[](int subscript)const
	{
		if (subscript<0 || subscript > this->size)
		{
			throw std::out_of_range("Subscript out of range.");
		}
		return ptr[subscript];
	}

	void setElements()
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "Enter a value for element " << i + 1<< " : ";
			std::cin >> ptr[i];
		}
	}

	void printElements()
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << ptr[i] << " ";
		}
		std::cout << "\n";
	}

private:
	size_t size;
	T* ptr;
};


