#include <iostream>

int main(int argc, const char *argv[]) {
    double milesDriven = 0, costPerGallon = 0, milesPerGallon = 0,
           parkingFees = 0, dailyTolls = 0, dailyDrivingCost = 0;

    std::cout << "Enter your total miles driven per day: ";
    std::cin >> milesDriven;

    std::cout << "Enter your cost per gallon of gasoline: ";
    std::cin >> costPerGallon;

    std::cout << "Enter your average miles per gallon: ";
    std::cin >> milesPerGallon;

    std::cout << "Enter your parking fees per day: ";
    std::cin >> parkingFees;

    std::cout << "Enter your tolls per day: ";
    std::cin >> dailyTolls;

    dailyDrivingCost = ((milesDriven / milesPerGallon) * costPerGallon) +
                       parkingFees + dailyTolls;

    std::cout << "\nDaily Driving Cost: " << dailyDrivingCost << std::endl;

    return 0;
}
