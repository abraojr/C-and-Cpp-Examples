#include <string>
#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount(string name, float balance) : name(name), balance(balance)
{
    credit_card = new CreditCard("Visa", 1000);
    cout << "Constructing account: " << name << " balance: " << balance << endl;
}

BankAccount::BankAccount(const BankAccount &bank_account) : name(bank_account.name), balance(bank_account.balance)
{
    credit_card = new CreditCard(*(bank_account.credit_card));
    cout << "Copy constructing account: " << name << " balance: " << balance << endl;
}

void BankAccount::set_credit_limit(float l)
{
    credit_card->set_limit(l);
}

void BankAccount::set_balance(float amount)
{
    balance = amount;
}

void BankAccount::display() const
{
    cout << "Name: " << name << " balance: " << balance << endl;
    credit_card->display();

    cout << "Address of CreditCard variable: " << credit_card << endl;
}

BankAccount::~BankAccount()
{
    delete credit_card;
    cout << "Destructing account: " << name << " balance: " << balance << endl;
}
