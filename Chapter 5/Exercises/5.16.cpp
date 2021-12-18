#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int principal = 1000 ;
    int rate = 5 ;

    std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    int dollar = 0;
    int pennies = 0;
    int amount = 0;
    int penniesRemainder = 0;


    for (int year = 1; year <= 10; ++year) {


        dollar = principal * rate / 100 ;

        pennies += (pennies * rate / 100) ;
        pennies +=  (principal * rate %100) ;
        penniesRemainder += (pennies * rate % 100);
        if(penniesRemainder > 99){
            pennies++;
            penniesRemainder %= 99;
        }

        if(pennies > 99){
            dollar++;
            pennies %= 100;
        }

        principal += dollar;
        amount = principal;
        std::cout << std::setw(4) << year << std::setw(21) << amount << "," << pennies
        << std::endl;



    }




    return 0;
}
