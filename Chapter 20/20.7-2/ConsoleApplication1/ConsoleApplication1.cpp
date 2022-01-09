// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BucketSort.h"
#include <random>

int main()
{
    std::random_device r;
    std::default_random_engine engine(r());
    std::uniform_int_distribution<unsigned int> randomInt(0, 100);
    int arr[20] = { 51,-8,123,0,82,105,-200,49,26,61,923,37,74 ,0,-5,-55,-15,-105,44,1};
    BucketSort bs(arr, 20);
    bs.sort();
    bs.printArr();

    std::cout << "End of main" << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
