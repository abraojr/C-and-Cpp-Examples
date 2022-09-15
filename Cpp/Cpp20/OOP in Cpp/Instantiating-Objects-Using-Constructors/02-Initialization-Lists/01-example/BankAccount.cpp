#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n, float b, string at) : name(n), balance(b), account_type(at)
{
    cout << "BankAccount constructor for: " << name
         << " balance: " << balance
         << " account type: " << account_type << endl;
}

string BankAccount::get_name()
{
    return name;
}

float BankAccount::get_balance()
{
    return balance;
}

string BankAccount::get_account_type()
{
    return account_type;
}