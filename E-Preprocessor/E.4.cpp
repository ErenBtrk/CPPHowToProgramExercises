#include <iostream>
#define PI 3.1415926535898
#define VOLUME_SPHERE(x) ((4.0/3)*(PI)*(x)*(x)*(x))


int main()
{
    int radius;
    std::cout << "Enter sphere radius : ";
    std::cin >> radius;
    std::cout << VOLUME_SPHERE(radius);


	return 0;
}
