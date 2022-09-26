#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string name, float balance, string account_type) : name(name), balance(balance), account_type(account_type)
{
    cout << "Constructing: " << name << " balance: " << balance << endl;
}

BankAccount::BankAccount(const BankAccount &bank_account) : name(bank_account.name), balance(bank_account.balance), account_type(bank_account.account_type)
{
    cout << "Copy constructing: " << name << " balance: " << balance << endl;
}

string BankAccount::get_name() const
{
    return name;
}

float BankAccount::get_balance() const
{
    return balance;
}

string BankAccount::get_account_type() const
{
    return account_type;
}

void BankAccount::set_balance(float amount)
{
    balance = amount;
}

void BankAccount::display() const
{
    cout << "Name: " << name << " balance: " << balance
         << " account type: " << account_type << endl;
}

BankAccount::~BankAccount()
{
    cout << "Destructing: " << name << " balance: " << balance << endl;
}
