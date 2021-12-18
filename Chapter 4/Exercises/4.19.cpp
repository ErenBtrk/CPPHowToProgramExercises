#include <iostream>


int main(){
    int counter=0;
    int largest=0;
    int secondLargest=0;
    int number=0;
    int flag=0;

        while(counter < 10){
            std::cout << "Please enter a number : " << std::endl;
            std::cin >> number;
                if(number > largest){
                    secondLargest = largest;
                    largest = number;
                }
                if(number < largest && number > secondLargest){
                    secondLargest = number;
                }
                counter++;
        }
            std::cout << "Largest num = " << largest << std::endl << "Second largest num = " << secondLargest << std::endl;






    return 0;
}
