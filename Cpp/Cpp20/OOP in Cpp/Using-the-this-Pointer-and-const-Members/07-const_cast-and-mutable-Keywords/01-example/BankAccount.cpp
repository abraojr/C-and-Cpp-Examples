#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n, float b) : name(n), balance(b) {}

string BankAccount::get_name() const
{
    return name;
}

float BankAccount::get_balance() const
{
    return balance;
}

void BankAccount::set_name(string n)
{
    name = n;
}

void BankAccount::set_balance(float b)
{
    balance = b;
}
