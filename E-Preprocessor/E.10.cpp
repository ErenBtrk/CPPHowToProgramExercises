#include <iostream>

#define SUM_ARRAY(arr,arrSize)  int sum = 0;\
                                for(size_t i = 0 ; i < arrSize ; i++)\
                                {\
                                    sum += arr[i];\
                                }\
                                std::cout << "Sum of the elements is : " << sum << std::endl;


int main()
{
    int arr[5] = {6,3,8,2,0};
    SUM_ARRAY(arr,5);


	return 0;
}
