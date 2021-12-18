#include <iostream>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main()
{
    SavingsAccount sa(1000, .5);
    CheckingAccount ca(1000, 1.5);

    std::cout << "Savings Account initial balance: " << sa.getAccountBalance();
    sa.credit(50);
    std::cout << "\ncredit 50: " << sa.getAccountBalance();
    sa.debit(100);
    std::cout << "\ndebit 100: " << sa.getAccountBalance()
              << "\nChecking Account initial balance: " << ca.getAccountBalance();
    ca.credit(50);
    std::cout << "\ncredit 50: " << ca.getAccountBalance();
    ca.debit(100);
    std::cout << "\ndebit 100: " << ca.getAccountBalance() << std::endl;


    return 0;
}
