#include <iostream>
#include "maximum.h"

int main(){
    int i1 = 0 , i2 = 0 , i3 = 0;
    std::cout << "Enter 3 integers : " << std::endl;
    std::cin >> i1 >> i2 >> i3 ;
    std::cout << "Maximum integer : " << maximum(i1,i2,i3) << std::endl;
    double d1 = 0.0 , d2 = 0.0 , d3 = 0.0;
    std::cout << "Enter 3 doubles : " << std::endl;
    std::cin >> d1 >> d2 >> d3 ;
    std::cout << "Maximum double : " << maximum(d1,d2,d3) << std::endl;
    char c1,c2,c3 ;
    std::cout << "Enter 3 chars : " << std::endl;
    std::cin >> c1 >> c2 >> c3 ;
    std::cout << "Maximum char : " << maximum(c1,c2,c3) << std::endl;

}

