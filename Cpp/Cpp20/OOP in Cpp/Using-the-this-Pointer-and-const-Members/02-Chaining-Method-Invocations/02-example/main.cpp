#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);

    cout << "-----------Withdraw and Deposit-----------" << endl;

    claudia_account.withdraw(300).withdraw(200).deposit(5000).deposit(2500);

    return 0;
}

/* OUTPUT
    -----------Withdraw and Deposit-----------
    New balance: 9700.45 after withdrawing: 300
    New balance: 9500.45 after withdrawing: 200
    New balance: 14500.5 after depositing: 5000
    New balance: 17000.4 after depositing: 2500
*/