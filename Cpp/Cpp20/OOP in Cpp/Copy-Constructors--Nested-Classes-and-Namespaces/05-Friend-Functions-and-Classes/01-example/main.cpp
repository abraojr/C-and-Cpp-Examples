#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

void display_transaction_report(const BankAccount &bank_account)
{
    cout << "------------------------------Account Details------------------------------" << endl;
    cout << "Name: " << bank_account.name
         << " current balance: " << bank_account.balance << endl;

    cout << "------------------------------Transactions------------------------------" << endl;
    for (auto transaction : bank_account.transaction_log)
    {
        cout << transaction << endl;
    }
}

int main()
{
    BankAccount lily_account("Lily", 1300.00f);

    lily_account.withdraw(50);
    lily_account.withdraw(300);

    lily_account.deposit(3000);
    lily_account.deposit(-30);

    lily_account.withdraw(20000);

    display_transaction_report(lily_account);

    return 0;
}

/* OUTPUT
    ------------------------------Account Details------------------------------
    Name: Lily current balance: 3950
    ------------------------------Transactions------------------------------
    New balance: 1250.000000 withdrew: 50.000000
    New balance: 950.000000 withdrew: 300.000000
    New balance: 3950.000000 deposited: 3000.000000
    Unchanged balance: 3950.000000 could not deposit: -30.000000
    Insufficient balance: 3950.000000 could not withdraw: 20000.000000
*/