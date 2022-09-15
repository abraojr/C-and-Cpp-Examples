#pragma once
#include <string>

class BankAccount
{
private:
    const std::string name;
    const float balance;
    const std::string account_type;

public:
    BankAccount(std::string n, float b, std::string at);

    std::string get_name();

    float get_balance();

    std::string get_account_type();
};
