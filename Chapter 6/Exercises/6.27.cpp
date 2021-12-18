#include <iostream>

using namespace std;

double smallest(double,double,double);

int main(){
    double n1 = 0.0,n2 = 0.0 ,n3 = 0.0;
    cout << "Please enter three double-precision numbers : " << endl;
    cin >> n1 >> n2 >> n3 ;
    cout << smallest(n1,n2,n3) << " is the smallest number." << endl;






    return 0;
}

double smallest(double num1,double num2,double num3){
    return min(num1,min(num2,num3));
}
