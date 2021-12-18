#include <iostream>
#include <iomanip>

using namespace std;

double fahrenheit(double);
double celcius(double);

int main(){
    cout << setw(15) << "Celcius" << setw(15) << "Fahrenheit" << endl;
    for(int degree = 0 ; degree <= 100 ; degree++){
        cout << setw(15) << setprecision(2) << fixed << celcius(fahrenheit(degree))
                << setw(15) << setprecision(2) << fixed << fahrenheit(degree) << endl;
    }







    return 0;
}

double fahrenheit(double celcius){
    return celcius * 9/5 + 32.0;
}
double celcius(double fahrenheit){
    return (fahrenheit - 32.0) * 5/9;
}
