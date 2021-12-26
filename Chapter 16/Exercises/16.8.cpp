#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>

int main()
{
    const size_t SIZE = 5;
    std::array <int ,SIZE> arr;
    for(size_t i = 0 ; i < SIZE  ; i++)
    {
        std::cout << "Enter " << i+1 << ".element : " ;
        std::cin >> arr[i];
    }
    std::ostream_iterator<int> output(std::cout , " ");
    std::sort(arr.begin(),arr.end());
    auto newEnd = std::unique(arr.begin(),arr.end());
    copy(arr.begin(),newEnd,output);



	return 0;
}
