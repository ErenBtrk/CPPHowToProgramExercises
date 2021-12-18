#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    int accountNo;
    double balance;
    double itemsCharged;
    double credits;
    double creditLimit;

    Account a1(0 , 0.0 , 0.0 , 0.0 , 0.0);

    while( accountNo != -1){
        cout << "Enter account no (or -1 to quit) : " << endl;
        cin >> accountNo;
            if(accountNo == -1){
                break;
            }
        cout << "Enter beginning balance : " << endl;
        cin >> balance;
        cout << "Enter total charges : " << endl;
        cin >> itemsCharged;
        cout << "Enter total credits : " << endl;
        cin >> credits;
        cout << "Enter credit limit : " << endl;
        cin >> creditLimit;

        a1.setAccountNo(accountNo);
        a1.setBalance(balance);
        a1.setCharges(itemsCharged);
        a1.setCredits(credits);
        a1.setCreditLimit(creditLimit);
        a1.setNewBalance();

        a1.checkLimit();

        a1.setAccountNo(0);
        a1.setBalance(0);
        a1.setCharges(0);
        a1.setCredits(0);
        a1.setCreditLimit(0);
    }
}
