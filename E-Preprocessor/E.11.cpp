#include <iostream>
#define PI 3.14

inline double volumeSphere(int x)
{
    return (4.0/3)*PI*x*x*x;
}

inline void output(int x,int y)
{
    std::cout << "The sum of " << x << " and " << y << " is  : " << x+y << std::endl;
}

inline int min2(int x,int y)
{
    return (x<y) ? x : y;
}


inline int min3(int x,int y,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if(y<x && y<z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

inline void printString(const std::string& str)
{
    std::cout << str << std::endl;
}

inline void printArray(int arr[],size_t arrSize)
{
    for(size_t i = 0 ; i < arrSize ; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

inline int sumArray(int arr[],size_t arrSize)
{
    int sum = 0;
    for(size_t i = 0 ; i < arrSize ; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    std::cout << "Volume sphere : " << volumeSphere(5) << std::endl;
    output(5,2);
    int num1 = 2;
    int num2 = 4;
    int num3 = 1;
    std::cout << "Minimum number is : " << min2(num1,num2) << std::endl;
    std::cout << "Minimum of three numbers is :" << min3(num1,num2,num3) << std::endl;
    printString("Hello world.");
    int arr[5] = {5,1,3,2,4};
    printArray(arr,5);
    std::cout << "Sum of the array elements is :" << sumArray(arr,5);

	return 0;
}
