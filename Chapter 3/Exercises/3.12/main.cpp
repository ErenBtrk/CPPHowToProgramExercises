#include <iostream>
#include <string>
#include "account.h"

using namespace std;

int main()
{
   Account account1(50);
   cout << "Account1 balance = " << account1.getBalance() << endl;

   Account account2(200);
   cout << "Account2 balance = " << account2.getBalance()  << endl;

    account1.credit(50);
    cout << "Account1's balance after adding amount of cash = " << account1.getBalance() << endl;
    account2.debit(199);
    cout << "Account2's balance after withdrawing amount of cash = " << account2.getBalance() << endl;

}
