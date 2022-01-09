#include <iostream>
#include <array>

template<typename T,const size_t sizeArr>
void displayArray(std::array<T,sizeArr>& arr)
{
    for(size_t i = 0 ; i < sizeArr ; i++)
    {
        std::cout << arr.at(i) << " - " ;
    }

    std::cout<< "\n\n";
}

template<typename T,const size_t sizeArr>
void bubbleSort(std::array<T,sizeArr>& arr)
{
    int counter = 0;
    bool isSorted;
    for(size_t i = 0 ; i < sizeArr-1 ; i++)
    {

        isSorted = true;
        for(size_t j = 0 ; j < sizeArr-i-1 ; j++)
        {
            std::cout << "i : "<< i << " - j : "<< j<< std::endl;
            counter ++;
            if(arr[j] > arr[j+1])
            {
                isSorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            displayArray(arr);
        }
        if(isSorted)
        {
            break;
        }
    }
    std::cout << counter << std::endl;
}




int main()
{
    const size_t SIZE = 10;
    std::array<int,SIZE> arr = {2,8,4,1,10,9,6,5,7,3};

    bubbleSort(arr);






    return 0;
}
