#include <iostream>

int main(int argc, const char *argv[]) {
    int count;
    int flag = 0;

    for (count = 1; count <= 10 && !flag ; ++count) {

        if( flag == 0){
            std::cout << count << " " ;
        }
        if (count == 4) {
            flag = 1 ;
        }


    }

    std::cout << "\nBroke out of loop at count = " << count << std::endl;
    return 0;
}
