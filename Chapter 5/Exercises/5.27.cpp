#include <iostream>


int main(int argc, char* argv[]) {
    int flag=0 ;
    for (int count = 1;  count <= 10; ++count) {
        if (count == 5) {
            flag = 1;
        }
        if(flag == 0){
            std::cout << count << ' ';
        }
        else{
            flag = 0;
        }

    }

    std::cout << "\nUsed continue to skip printing 5" << std::endl;

    return 0;
}  // end method main
