#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(int account_id, string name, float balance) : account_id(account_id), name(name), balance(balance), cc_due(0) {}

bool BankAccount::buy_on_credit(float amount)
{
    if (amount <= (balance - cc_due))
    {
        cc_due += amount;

        return true;
    }

    return false;
}

bool BankAccount::pay_off_credit()
{
    if (balance > cc_due)
    {
        balance -= cc_due;
        cc_due = 0;

        return true;
    }

    return false;
}

void BankAccount::show() const
{
    cout << "----------------" << name << "----------------" << endl;
    cout << "Balance: " << balance
         << " Credit card amount due: " << cc_due << endl << endl;
}