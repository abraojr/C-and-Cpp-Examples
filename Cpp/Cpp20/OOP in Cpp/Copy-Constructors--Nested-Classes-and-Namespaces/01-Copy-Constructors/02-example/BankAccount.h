#pragma once
#include <string>

class BankAccount
{
private:
    std::string name;
    float balance;
    std::string account_type;

public:
    BankAccount(std::string name, float balance, std::string account_type);

    BankAccount(const BankAccount &bank_account);

    std::string get_name() const;

    float get_balance() const;

    std::string get_account_type() const;

    void set_balance(float b);

    void display() const;

    ~BankAccount();
};
