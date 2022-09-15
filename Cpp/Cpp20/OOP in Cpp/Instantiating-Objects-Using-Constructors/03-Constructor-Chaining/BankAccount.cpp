#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n) : BankAccount(n, 100)
{
    cout << "BankAccount 1 argument constructor" << endl;
}

BankAccount::BankAccount(string n, float b) : BankAccount(n, b, "checking")
{
    cout << "BankAccount 2 argument constructor" << endl;
}

BankAccount::BankAccount(string n, float b, string at) : BankAccount(n, b, at, 0)
{
    cout << "BankAccount 3 argument constructor" << endl;
}

BankAccount::BankAccount(string n, float b, string at, float sc) : name(n), balance(b), account_type(at), service_charge(sc)
{
    cout << "--------------------------------------" << endl;
    cout << "BankAccount 4 argument constructor: " << name
         << " balance: " << balance
         << " account type: " << at
         << " service charge: " << sc << endl;
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

float BankAccount::get_service_charge()
{
    return service_charge;
}
