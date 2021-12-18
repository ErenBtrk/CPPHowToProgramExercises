#include <iostream>

using namespace std;

int main(){
    enum AccountType{SAVINGS = 1,CHECKING,INVESTMENT};
    AccountType AccType1 = SAVINGS;
    AccountType AccType2 = CHECKING;
    AccountType AccType3 = INVESTMENT;
    cout << AccType1 << endl;
    cout << AccType2 << endl;
    cout << AccType3 << endl;






    return 0;
}
