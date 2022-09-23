#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);

    cout << "-----------Withdraw and Deposit-----------" << endl;

    claudia_account.withdraw(100)->withdraw(200)->deposit(300)->deposit(2500);

    return 0;
}

/* OUTPUT
    -----------Withdraw and Deposit-----------
    New balance: 9900.45 after withdrawing: 100
    New balance: 9700.45 after withdrawing: 200
    New balance: 10000.5 after depositing: 300
    New balance: 12500.5 after depositing: 2500
*/