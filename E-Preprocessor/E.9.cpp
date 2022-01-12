#include <iostream>

#define PRINT_ARRAY(arr,arrSize) for(size_t i = 0 ; i < arrSize ; i++)\
                                {\
                                    std::cout << arr[i] << ' ';\
                                }\
                                std::cout << '\n';

int main()
{
    int arr[5] = {6,3,8,2,0};
    PRINT_ARRAY(arr,5);


	return 0;
}
