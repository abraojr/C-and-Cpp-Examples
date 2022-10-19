#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string name, float balance) : name(name), balance(balance)
{
    credit_card = new CreditCard("Visa", 1000);

    cout << "Contructing account: " << name
         << ", balance: " << balance << endl;
}

BankAccount::~BankAccount()
{
    delete credit_card;

    cout << "Destructing: " << name
         << " ,balance: " << balance << endl;
}