#include <iostream>
#include <array>

template<typename T,const size_t sizeArray>
int recursiveBinarySearch(std::array<T,sizeArray>& arr,T searchKey,int startingIndex = 0,int endIndex = sizeArray-1)
{
    if(endIndex >= startingIndex)
    {
       int mid = startingIndex +(endIndex-startingIndex) / 2;

        if(searchKey == arr[mid])
        {
            return mid;
        }
        else if(searchKey > arr[mid])
        {
            return recursiveBinarySearch(arr,searchKey,mid+1,endIndex);
        }
        else
        {
            return recursiveBinarySearch(arr,searchKey,startingIndex,mid-1);
        }
    }

    return -1;
}




int main()
{
    const size_t SIZE = 7;
    std::array<int,SIZE> arr = {1,2,3,4,5,6,7};

    std::cout << recursiveBinarySearch(arr,7);






    return 0;
}
