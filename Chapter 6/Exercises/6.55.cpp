#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <random>

std::default_random_engine engine(static_cast <int> (time(NULL)));

int rollDice();

int main(int argc, const char *argv[]) {
    enum Status { CONTINUE, WON, LOST };

    int myPoint;
    Status gameStatus;

    // randomize random number generator using current time
    srand(time(0));

    int sumOfDice = rollDice();

    // determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            std::cout << "Point is " << myPoint << std::endl;
            break;
    }

    while (gameStatus == CONTINUE) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = WON;
        } else {
            if (sumOfDice == 7) {
                gameStatus = LOST;
            }
        }
    }

    if (gameStatus == WON) {
        std::cout << "Player wins" << std::endl;
    } else {
        std::cout << "Player loses" << std::endl;
    }

    return 0;
}
int rollDice() {

    std::uniform_int_distribution <int> randomNumber(1,6);


    int die1 = randomNumber( ::engine );

    int die2 = randomNumber( ::engine );

    int sum = die1 + die2;

    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum
              << std::endl;

    return sum;
}
