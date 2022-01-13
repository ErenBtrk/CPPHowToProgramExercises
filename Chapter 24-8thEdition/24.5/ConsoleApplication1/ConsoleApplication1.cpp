    // ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Header.h"

using namespace CountryInformation;

int main()
{
    //A - false.variable kilometers is not visible within namespace Data
    
    //B - false.variable string1 is not visible within namespace Data

    //C - true.constant POLAND is not visible within namespace Data

    //D - false.constant GERMANY is not visible within namespace Data

    //E - true.function function is visible within namespace Data

    //F - false.Namespace Data is not visible to namespace CountryInformation

    //G - false.Object map is not  visible to namespace CountryInformation. can be visible like -> CountryInformation::RegionalInformation::map

    //H - false.Object string1 is not visible within namespace RegionalInformation

    
    
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
