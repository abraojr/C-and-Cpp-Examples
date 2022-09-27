#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;
using std::to_string;

BankAccount::BankAccount(string name, float balance) : name(name), balance(balance) {}

bool BankAccount::withdraw(float amount)
{
    if (balance >= amount)
    {
        balance -= amount;

        string transaction = "New balance: " + to_string(balance) + " withdrew: " + to_string(amount);
        transaction_log.push_back(transaction);

        return true;
    }

    string transaction = "Insufficient balance: " + to_string(balance) + " could not withdraw: " + to_string(amount);
    transaction_log.push_back(transaction);

    return false;
}

bool BankAccount::deposit(float amount)
{
    if (amount >= 0)
    {
        balance += amount;

        string transaction = "New balance: " + to_string(balance) + " deposited: " + to_string(amount);
        transaction_log.push_back(transaction);

        return true;
    }

    string transaction = "Unchanged balance: " + to_string(balance) + " could not deposit: " + to_string(amount);
    transaction_log.push_back(transaction);

    return false;
}