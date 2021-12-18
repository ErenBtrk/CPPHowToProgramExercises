#include <iostream>
#include <vector>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main(){
    vector < Account* > accountVector(3);
    accountVector[0] = new Account(500);
    accountVector[1] = new SavingsAccount(500,0.04);
    accountVector[2] = new CheckingAccount(500,10);
    double money = 0;
    int choice = 0;

    for(Account * accountPtr : accountVector){
        cout << "Account type : " << typeid(*accountPtr).name() << endl;
            SavingsAccount *derivedPtr = dynamic_cast < SavingsAccount* > (accountPtr);
        if( derivedPtr != nullptr) {
            cout << "Interest amount : " << derivedPtr ->calculateInterest() << endl;
            derivedPtr->credit( derivedPtr->calculateInterest() );
            cout << "New account balance : " << derivedPtr->getAccountBalance() << endl;
        }
        cout << "Account balance : " << accountPtr->getAccountBalance() << endl;

        cout << "Enter [1] if you want to credit\nEnter [2] if you want to debit" << endl;
        cin >> choice;
        cout << "Enter the amount of money : " ;
        cin >> money;
        switch(choice){
        case 1:
            accountPtr->credit(money);
            break;
        case 2:
            accountPtr->debit(money);
            break;
        }
        cout << " New account balance : " << accountPtr->getAccountBalance() << endl;
        cout << endl << endl;
    }
}
