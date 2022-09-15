#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string n, float b) : name(n), balance(b) {}

void BankAccount::display()
{
    cout << "Name: " << this->name << " balance: " << this->balance << endl;
}

bool BankAccount::withdraw(float amount)
{
    if (this->balance >= amount)
    {
        this->balance -= amount;
        cout << "New balance: " << this->balance << " after withdrawing: " << amount << endl;

        return true;
    }

    cout << "Insufficient balance: " << this->balance << " could not withdraw: " << amount << endl;

    return false;
}

bool BankAccount::deposit(float amount)
{
    if (amount >= 0)
    {
        this->balance += amount;
        cout << "New balance: " << this->balance << " after depositing: " << amount << endl;

        return true;
    }

    cout << "Unchanged balance: " << this->balance << " could not deposit: " << amount << endl;

    return false;
}