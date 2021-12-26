#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>

int main()
{
    const size_t SIZE = 20;
    std::array <int ,SIZE> arr;
    for(size_t i = 0 ; i < SIZE  ; i++)
    {
        std::cout << "Enter " << i+1 << ".element : " ;
        std::cin >> arr[i];
    }
    std::ostream_iterator<int> output(std::cout , " ");
    std::sort(arr.begin(),arr.end());

    std::vector <int> vec;
    std::unique_copy(arr.begin(),arr.end(),back_inserter(vec));
    copy(vec.cbegin(),vec.cend(),output);



	return 0;
}
