#include <iostream>
#include <string>
#include "account.h"

using namespace std;

unsigned int studentCounter{0};
double initialBalance{1000.0};

int main()
{
    Account a1(24212,"Ali","Veli",200);
    a1.showDetails();
    cout << studentCounter << endl;
    cout << initialBalance << endl;
}
