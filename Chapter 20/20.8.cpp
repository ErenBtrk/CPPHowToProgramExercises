#include <iostream>
#include <array>

template<typename T,const size_t sizeArray>
int recursiveLinearSearch(std::array<T,sizeArray>& arr,T searchKey,int startingIndex = 0)
{
    if(startingIndex > sizeArray)
    {
        return -1;
    }
    else
    {
        if(arr[startingIndex] == searchKey)
        {
            return startingIndex;
        }
        return recursiveLinearSearch(arr,searchKey,startingIndex + 1);
    }

}




int main()
{
    const size_t SIZE = 10;
    std::array<int,SIZE> arr = {2,8,4,1,10,9,6,5,7,3};

    std::cout << recursiveLinearSearch(arr,10);






    return 0;
}
