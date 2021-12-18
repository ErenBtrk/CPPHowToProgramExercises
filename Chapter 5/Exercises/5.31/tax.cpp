#include <iostream>
#include <iomanip>
#include "tax.h"

Tax::Tax():housingExpense(0.0),foodExpense(0.0),clothingExpense(0.0),
                transportationExpense(0.0),educationExpense(0.0),healthExpense(0.0),
                vacationExpense(0.0),totalExpense(0.0){}

void Tax::setHousing(){
    std::cout << "Please enter housing expense : " << std::endl;
    std::cin >> housingExpense ;
}

void Tax::setFood(){
    std::cout << "Please enter food expense : " << std::endl;
    std::cin >> foodExpense ;
}

void Tax::setClothing(){
    std::cout << "Please enter clothing expense : " << std::endl;
    std::cin >> clothingExpense ;
}

void Tax::setTransportation(){
    std::cout << "Please enter transpotation expense : " << std::endl;
    std::cin >> transportationExpense ;
}

void Tax::setEducation(){
    std::cout << "Please enter education expense : " << std::endl;
    std::cin >> educationExpense ;
}

void Tax::setHealth(){
    std::cout << "Please enter health expense : " << std::endl;
    std::cin >> healthExpense ;
}

void Tax::setVacation(){
    std::cout << "Please enter vacation expense : " << std::endl;
    std::cin >> vacationExpense ;
}

void Tax::setTotal(){
    totalExpense = housingExpense + foodExpense +clothingExpense + transportationExpense
                            + educationExpense + healthExpense + vacationExpense ;
}

void Tax::countTaxes(){
    totalTax = housingExpense * 0.23 + foodExpense * 0.23 + clothingExpense * 0.23
                    + transportationExpense * 0.23 + educationExpense * 0.23 + healthExpense * 0.23
                    + vacationExpense * 0.23 ;
}

void Tax::display(){
    std::cout << std::setw(10) << "Housing" << std::setw(10) << "Food" << std::setw(10) << "Clothing"
            << std::setw(17) << "Transportation " << std::setw(10) << "Education" << std::setw(10) << "Health"
            << std::setw(10) << "Vacation" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << std::setw(10) << housingExpense
            << std::setw(10) << foodExpense << std::setw(10) << clothingExpense
            << std::setw(17) << transportationExpense << std::setw(10) << educationExpense
            << std::setw(10) << healthExpense << std::setw(10) << vacationExpense << std::endl;
    std::cout << std::setw(10) << "Tax" << std::setw(10) << "Tax" << std::setw(10) << "Tax"
            << std::setw(17) << "Tax" << std::setw(10) << "Tax" << std::setw(10) << "Tax"
            << std::setw(10) << "Tax" << std::endl;
   std::cout << std::setw(10) << housingExpense * 0.23 << std::setw(10) << foodExpense * 0.23
            << std::setw(10) << clothingExpense * 0.23 << std::setw(17) << transportationExpense * 0.23
            << std::setw(10) << educationExpense * 0.23 << std::setw(10) << healthExpense * 0.23
            << std::setw(10) << vacationExpense * 0.23 << std::endl;

    std::cout << "Total Expense = " << totalExpense << std::endl;
    std::cout << "TOTAL TAX = " << totalTax << std::endl;

}

void Tax::run(){
    setHousing();
    setFood();
    setClothing();
    setTransportation();
    setEducation();
    setHealth();
    setVacation();
    setTotal();
    countTaxes();
    display();
}
