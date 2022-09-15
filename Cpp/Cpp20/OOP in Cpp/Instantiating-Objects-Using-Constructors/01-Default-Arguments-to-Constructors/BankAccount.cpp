#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n, float b)
{
    name = n;
    balance = b;

    cout << "BankAccount constructor for: " << name << " balance: " << balance << endl;
}

string BankAccount::get_name()
{
    return name;
}

float BankAccount::get_balance()
{
    return balance;
}
