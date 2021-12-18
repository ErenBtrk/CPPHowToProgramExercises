#include <iostream>
#include <math.h>

using namespace std;

int factorial(int);
double estimateConstant(int);
double computeEpowX(int,double);


int main(){
    unsigned int number = 0 ;
    int desiredAcc = 0;
    int x = 0;
    cout << "Please enter a number to count it's factorial : " << endl;
    cin >> number ;
    cout << "Factorial of the number you've entered is : " << factorial(number) << endl;

    cout << "Please enter a desired accuracy of  mathematical constant e : " << endl;
    cin >> desiredAcc ;
    cout << "Estimated value of the mathematical constant e : " << estimateConstant(desiredAcc) << endl;

    cout << "Please enter the value of x (ePowX) : " << endl;
    cin >> x;
    cout << "Please enter a desired accuracy of ePowX : " << endl;
    cin >> desiredAcc ;
    cout << "Estimated value of ePowX : " << computeEpowX(desiredAcc,x) << endl;





    return 0;
}

int factorial (int number){
    int total = 1;
    while( number > 0 ){
        total *= number ;
        number--;
    }
    return total;
}

double estimateConstant(int desiredAcc){
    double total = 0;
    int counter = 0;
    while(counter <= desiredAcc){
        total = total + 1.0/factorial(counter);
        counter++;
    }
    return total;
}

double computeEpowX(int desiredAcc,double x){
    double total = 0.0;
    int counter = 0;
    while ( counter <= desiredAcc ){
        total += pow(x,counter) / factorial(counter);
        counter++;
    }
    return total;

}
