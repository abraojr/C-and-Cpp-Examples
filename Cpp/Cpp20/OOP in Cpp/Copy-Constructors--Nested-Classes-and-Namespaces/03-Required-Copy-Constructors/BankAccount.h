#pragma once
#include <string>

#include "CreditCard.h"

class BankAccount
{
private:
    std::string name;
    float balance;
    CreditCard *credit_card;

public:
    BankAccount(std::string name, float balance);

    BankAccount(const BankAccount &bank_account) = default;

    void set_credit_limit(float l);

    void set_balance(float amount);

    void display() const;

    ~BankAccount();
};
