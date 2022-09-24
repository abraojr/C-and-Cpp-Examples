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

bool BankAccount::withdraw(float amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        cout << "New balance: " << balance << " after withdrawing: " << amount << endl;

        return true;
    }

    cout << "Insufficient balance: " << balance << " could not withdraw: " << amount << endl;

    return false;
}

bool BankAccount::deposit(float amount)
{
    if (amount >= 0)
    {
        balance += amount;
        cout << "New balance: " << balance << " after depositing: " << amount << endl;

        return true;
    }

    cout << "Unchanged balance: " << balance << " could not deposit: " << amount << endl;

    return false;
}