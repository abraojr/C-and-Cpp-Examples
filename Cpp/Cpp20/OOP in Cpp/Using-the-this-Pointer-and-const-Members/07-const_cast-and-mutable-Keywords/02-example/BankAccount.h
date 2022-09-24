#pragma once
#include <string>

class BankAccount
{
private:
    std::string name;
    float balance;

    mutable unsigned int balance_check_count = 0;

public:
    BankAccount(std::string name, float balance);

    std::string get_name() const;

    float get_balance() const;
};
