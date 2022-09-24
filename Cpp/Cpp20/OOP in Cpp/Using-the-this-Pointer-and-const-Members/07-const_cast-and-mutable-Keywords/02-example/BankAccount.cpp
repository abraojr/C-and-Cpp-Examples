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
    balance_check_count++;

    cout << "You have checked your balance "
         << balance_check_count << " time(s) ";

    return balance;
}