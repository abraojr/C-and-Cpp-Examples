#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(const string &n, const float &b, const string &at) : name(n), balance(b), account_type(at)
{
    cout << "BankAccount constructor for: " << name
         << " balance: " << balance
         << " account type: " << account_type << endl;
}

const string &BankAccount::get_name()
{
    return name;
}

const float &BankAccount::get_balance()
{
    return balance;
}

const string &BankAccount::get_account_type()
{
    return account_type;
}