#pragma once
#include <string>

class BankAccount
{
private:
    std::string name;
    float balance;

public:
    BankAccount(std::string name, float balance);

    std::string get_name() const;

    float get_balance() const;

    bool withdraw(float amount);

    bool deposit(float amount);
};
