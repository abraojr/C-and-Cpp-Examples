#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n, float b) : name(n), balance(b) {}

string BankAccount::get_name() const
{
    cout << "const version of get_name()" << endl;
    return name;
}

float BankAccount::get_balance() const
{
    cout << "const version of get_balance()" << endl;
    return balance;
}

string &BankAccount::get_name()
{
    cout << "non-const version of get_name()" << endl;
    return name;
}

float &BankAccount::get_balance()
{
    cout << "non-const version of get_balance()" << endl;
    return balance;
}
