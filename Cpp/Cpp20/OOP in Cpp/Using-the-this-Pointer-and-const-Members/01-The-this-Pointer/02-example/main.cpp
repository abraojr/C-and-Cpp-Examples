#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);
    BankAccount peter_account("Peter", 6667.35f);

    cout << "------------------------Withdraw and Deposit------------------------" << endl;

    claudia_account.withdraw(300);
    peter_account.deposit(4000);

    claudia_account.display();
    peter_account.display();

    return 0;
}

/* OUTPUT
    ------------------------Withdraw and Deposit------------------------
    New balance: 9700.45 after withdrawing: 300
    New balance: 10667.3 after depositing: 4000
    Name: Claudia balance: 9700.45
    Name: Peter balance: 10667.3
*/