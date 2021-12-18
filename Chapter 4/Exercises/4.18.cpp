#include <iostream>


int main(){
    int n=1;
        std::cout << "N" << '\t' << "N*10" << '\t' << "N*100" << '\t' << "N*1000" << std::endl;
    while( n<=5 ){
        std::cout << n << '\t' << n*10 << '\t' << n*100 << '\t' << n*1000 << std::endl;
        n++;
    }




    return 0;
}
